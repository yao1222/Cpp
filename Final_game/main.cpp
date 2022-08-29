#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>

using namespace std;

void rules();

int main()
{
    string playerName;
    int balance;          // stores player's balance
    int bettingAmount;
    int guess;
    int dice;            // stores the random number
    char choice;
    srand(time(0));     // "Seed" the random generator
    
    // Start Game
    cout << "\n\t\t======== START GAME =======" << endl << endl;
    cout << "What's your Name : ";
    getline(cin, playerName);
    cout << "Enter the starting money to play : $";
    cin >> balance;
    do
    {
        system("cls");
        rules();
        cout << "\n\nYour current balance is $ " << balance << "\n";
// Get player's betting balance
        do
        {
            cout << "Hey, " << playerName<<", enter amount to bet : $";
            cin >> bettingAmount;
            if(bettingAmount > balance)
                cout << "Betting balance can't be more than current balance!\n"
                       <<"\nRe-enter balance\n ";
        }while(bettingAmount > balance);
// Get player's numbers
        do
        {
            cout << "Guess any betting number between 1 & 10 :";
            cin >> guess;
            if(guess <= 0 || guess > 10)
                cout << "\nNumber should be between 1 to 10\n"
                    <<"Re-enter number:\n ";
        }while(guess <= 0 || guess > 10);
        dice = rand()%10 + 1;
        if(dice == guess)
        {
            cout << "\n\nYou are in luck!! You have won Rs." << bettingAmount * 10;
            balance = balance + bettingAmount * 10;
        }
        else
        {
            cout << "Oops, better luck next time !! You lost $ "<< bettingAmount <<"\n";
            balance = balance - bettingAmount;
        }
        cout << "\nThe winning number was : " << dice <<"\n";
        cout << "\n"<<playerName<<", You have balance of $ " << balance << "\n";
        if(balance == 0)
        {
            cout << "You have no money to play ";
            break;
        }
        cout << "\n\n-->Do you want to play again (y/n)? ";
        cin >> choice;
    }while(choice =='Y'|| choice=='y');
    cout << "\n\n\n";
    cout << "\n\nThanks for playing the game. Your balance is $ " << balance << "\n\n";
    return 0;
}

// Print Rules on screen
void rules()
{
    system("cls");
    cout << "\t\t======NUMBER GUESSING RULES!======\n";
    cout << "\t1. ���1~10�������Ʀr\n";
    cout << "\t2. Ĺ�a�i�HĹ��10�������B\n";
    cout << "\t3. �q���N�|�鱼�ҤU�`�����B\n\n";
}
