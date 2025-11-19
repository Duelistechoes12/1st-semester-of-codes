#include<iostream>
using namespace std;

int square_number(int number);

int main()
{


	int squared_value;

	cout << "Please enter an integer:  ";
	cin >> squared_value;

	int pass_by_pass = square_number(squared_value);

	cout << "The square is: " << pass_by_pass << endl;

	return 0;


}
int square_number(int number)
{

	int square_result = number *number;
	return square_result;


}