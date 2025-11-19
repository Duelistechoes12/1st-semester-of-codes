#include<iostream>
using namespace std;

int main()
{
	int choice;
	double balance = 1000.0;
		double amount;

		do
		{
			cout << "\n===ATM menu===\n";
			cout << "1. deposit a check";
			cout << " 2. withdraw money";
			cout << " 3. Check balance";
			cout << " 4. Exit";
			cout << " please choose a choice? (1-4)";
			cin >> choice;

			switch (choice)
			{
			case 1:
			{
				cout << "enter you deposit amount";
				cin >> amount;
				balance = balance + amount;
				cout << "deposited $" << amount << endl;

			}
			break;

			case 2:
			{
				cout << "enter withdrawl";
				cin >> amount;
				if (amount > balance)
					cout << "insufficent balance!" << endl;
				else
				{
					balance -= amount;
					cout << "whith drawn $" << amount << endl;
				}
			}
			break;

			case 3:
			{
				cout << "current balance" << balance << endl;
			}
			break;

			case 4:
			{
				cout << "thank you for using ATM" << endl;
			}
			break;
			default:
				cout << "invalid choice, try again." << endl;
			}
			
		} while (choice != 0);
		return 0;

}