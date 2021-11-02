#include <iostream>
#include <string>    // Needed to use strings
#include <cstdlib>   // Needed to use random numbers
#include <ctime>
using namespace std;

void rules();

int main()
{
    string playerName;
    int balance;        // stores player's money
    int bettingAmount;
    int guess;
    int dice;           // stores the random number
    char choice;
    srand(time(0));     // "Seed" the random generator
    
    // Start Game
    cout << "\n\t\t========猜數字=======\n\n";
    cout << "\n\n玩家名稱 : ";
    getline(cin, playerName);
    cout << "\n\n輸入開始遊戲的金額 : $";
    cin >> balance;
    do
    {
        system("cls");
        rules();
        cout << "\n\nYour current balance is $ " << balance << "\n";
    
        // 取得下注金額
        do
        {
            cout << "Hey, " << playerName<<", 輸入下注金額 : $";
            cin >> bettingAmount;
            if(bettingAmount > balance)
                cout << "你錢不夠啦!\n"
                       <<"\n再輸入一次金額\n ";
        }while(bettingAmount > balance);
        
        // Get player's numbers
        do
        {
            cout << "請猜1-10之間的數字 :";
            cin >> guess;
            if(guess <= 0 || guess > 10)
                cout << "\n要在 1 到 10 的範圍內\n"
                    <<"再輸入一次:\n ";
        }while(guess <= 0 || guess > 10);
        dice = rand()%10 + 1;
        if(dice == guess)
        {
            cout << "\n\n中獎拉!! 你贏到了" << bettingAmount * 10;
            balance = balance + bettingAmount * 10;
        }
        else
        {
            cout << "Oops, 下次會更好 !! 輸了 $ "<< bettingAmount <<"\n";
            balance = balance - bettingAmount;
        }
        cout << "\n中獎數字 : " << dice <<"\n";
        cout << "\n"<<playerName<<", 您的金額 $ " << balance << "\n";
        if(balance == 0)
        {
            cout << "沒錢了QQ ";
            break;
        }
        cout << "\n\n-->再玩一次(y/n)? ";
        cin >> choice;
    }while(choice =='Y'|| choice=='y');
    cout << "\n\n\n";
    cout << "\n\n謝謝參與遊戲。 您的金額還有 $ " << balance << "\n\n";
    return 0;
}
void rules()
{
    system("cls");
    cout << "\t\t======遊戲規則!======\n";
    cout << "\t1. 猜一個 1-10之間的數字\n";
    cout << "\t2. 贏家可獲得10倍下注金額的獎金\n";
    cout << "\t3. 猜錯將孫師下注金額\n\n";
}
