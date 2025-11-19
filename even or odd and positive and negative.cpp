#include<iostream>
using namespace std;

int check_even_or_odd(int number);

int check_positive_and_negative(int number);

int main()
{
	int user_input;

	cout << "Please enter an input:  ";
	cin >> user_input;

	if (check_even_or_odd(user_input) == true)
	{
		cout << user_input << "is even." << endl;

	}
	else
	{

		cout << user_input << "is odd." << endl;
	}

	if (check_positive_and_negative(user_input) == true)
	{

		cout << user_input << "is positive." << endl;


	}
	else
	{

		cout << user_input << "is negative." << endl;

		
	}

	return 0;
}
int check_even_or_odd(int number)
{


	if (number % 2 == 0)
	{

		return 1;

	}
	else
	{

		return 0;
	}


}
int check_positive_and_negative(int number)
{

	if (number >= 0)
	{

		return 1;

	}
	else
	{


		return 0;

	}



}