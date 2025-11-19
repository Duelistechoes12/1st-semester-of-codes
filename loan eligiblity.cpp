#include<iostream>
using namespace std;

int main()
{
	int age;
	int salary;
	int credit_score;

	cout << "In order to get a loan, you have to be over 21" << endl;
	cin >> age;

	cout << "put in salary" << endl;
	cin >> salary;
	
	cout << "put in credit score" << endl;
	cin >> credit_score;

	if (age < 21)
	{
		cout << "you are not eligible(too young)" << endl;

		if ((age > 21 || salary < 30000))
		{
			cout << "you are not eligible(low income)" << endl;
		}
		if (salary > 30000 && credit_score < 650)
		{
			cout << "you are not eligible(low credit score) " << endl;
		}
	}
	else
	{
		cout << "Loan approved" << endl;
	}
	return 0;
}