#include<iostream>
using namespace std;

//a_number and b_number are agruments
int max_of_two(int a_number, int b_number);

int main()
{

	int number_1, number_2;


	cout << "Please enter a two numbers:  ";
	cin >> number_1>> number_2;

	int larger_number = max_of_two(number_1, number_2);

	cout << "The larger number is:  " << larger_number << endl;

	return 0;
}
int max_of_two(int a_number, int b_number)
{

	int result;

	if (a_number > b_number)
	{

		return a_number;
	}
	else
	{

		return b_number;

	}
	

}