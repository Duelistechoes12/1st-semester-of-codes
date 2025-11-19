#include<iostream>
using namespace std;


int smallest_number(int first_number, int second_number, int third_number);
int largest_number(int first_number, int second_number, int third_number);

int main()
{

	int number_1, number_2, number_3;

	cout << "Enter three integers: ";
	cin >> number_1>> number_2>> number_3;

	int smallest_num = smallest_number(number_1, number_2, number_3);
	int largest_num = largest_number(number_1, number_2, number_3);

	cout << "Smallest number:  " << smallest_num << endl;
	cout << "Largest number:  " << largest_num << endl;

	return 0;
}
int smallest_number(int first_number, int second_number, int third_number)
{

	int smallest = first_number;

	if (second_number < smallest)
	{
		smallest = second_number;
		
	}
	if (third_number < smallest)
	{

		smallest = third_number;

	}
	return smallest;
}
int largest_number(int first_number, int second_number, int third_number)
{

	int largest = first_number;

	if (second_number > largest)
	{
		largest = second_number;

	}
	if (third_number > largest)
	{

		largest = third_number;
	}
	return largest;
}