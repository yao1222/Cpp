#include <iostream>
#include <fstream>
#include <string>
#define N 50
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int loggedIn()
{
	string password, username, un, pw;
	
	// input us, pw
	cout << "Enter username to login: ";
	cin >> username;
	cout << "Enter password to login: ";
	cin >> password;
	
	// read database
	ifstream read;
	read.open("database.txt");
	getline(read, un);
	getline(read, pw);
	read.close();
	if(un==username && pw==password)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}




int main(int argc, char** argv) {
	char op;
	string un, pw;
	ofstream file;
	bool m;
	
	while(1)
	{
		// Select action
		cout << "Register : 1" << endl;
		cout << "Login    : 2" << endl;
		cout << "Exit     : 3" << endl;
		cout << "Enter your choice : ";
		cin >> op;
		
		// Start action
		switch(op){
			case '1':
				cout << ".......... Please create your username and password .........." << endl;
				cout << "Enter username: ";
				cin >> un;
				cout << "Enter password: ";
				cin >> pw;
				file.open("database.txt");
				file << un << endl << pw;
				file.close();	
				break;
			case '2':
				cout << ".......... Please enter your username and password .........." << endl;
				m = loggedIn();
				if(!m)
				{
					cout << "Wrong username or password!" << endl;
					return 0;
				}
				else
				{
					cout << "Sucessfully log in." << endl;
					
				}
				break;
			case '3':
				return 0;
			default:
				cout << "Please enter 1 / 2 / 3." << endl;
				break;		
		}
		system("pause");
		system("cls");
	} 
	
	
	
	return 0;
}
