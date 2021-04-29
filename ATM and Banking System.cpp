#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Bank {
	private:
		char name[60], type[60];
		int bal;
		int acno;
	public:
		Bank() {
			cout << "Enter Account Name: ";
			cin.getline(name,60);
			cout << "Enter Account Type: ";
			cin.getline(type, 60);
			cout << "Enter Account No: ";
			cin >> acno;
			cout << "Enter Opening Balance: ";
			cin >> bal;
		}
		void deposit(int amt) {
			system("pause");
			bal = bal + amt;
			cout << "Balance after deposite: " <<bal<< endl;
			
		}
		void withdraw(int amt) {
			system("pause");
			if (amt > bal) {
				cout << "Sorry your Amount is less than the amount..." << endl;
			}
			else {
				bal = bal - amt;
				cout << "Balance after withdraw: " << bal << endl;
			}
			

			
		}
		void display() {
			system("pause");
			cout << "----------------Account Details-------------------" << endl;
			cout << "Account Name: " << name << endl;
			cout << "Account Type: " << type << endl;
			cout << "Account No: " << acno << endl;
			cout << "Current Balance: " << bal << endl;
		}
};
int main() {
	cout << "----------------------------------------ATM AND BANKING SYSTEM------------------------------------" << endl << endl << endl;
	Bank b1;
	int amount, choice;
	do{
		system("cls");
		cout << "-------Main Menu-------" << endl;
		cout << "1:- Deposit Money" << endl;
		cout << "2:- Withdraw Money" << endl;
		cout << "3:- Display Account Detail" << endl;
		cout << "4:- Quit" << endl;
		cout << "Enter any choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter amount to deposit: ";
			cin >> amount;
			b1.deposit(amount);
			break;
			
		case 2:
			cout << "Enter Amount To Be Withdraw:";
			cin >> amount;
			b1.withdraw(amount);
			break;
			

		case 3:
			cout << "-----------Acccount Details------------";
			b1.display();
			break;
			
		case 4:
			exit(0);
		
		case 5:
			if (choice > 4) {
				cout << "Invalid Choice" << endl;
				break;
			}
		}
		
		
	} 
	while (1);

	
}