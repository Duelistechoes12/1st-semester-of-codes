#include<iostream>
using namespace std;

int main()
{
	int number;
	number = 25;
	int* first_pointer;
	first_pointer = &number;

	cout << "Value of number: " << number << endl << endl;
	cout << "Adress of number (&number): " << &number << endl << endl;
	cout << "Pointer first_pointer stores: " << first_pointer << endl << endl;
	cout << "Value of adress(&number): " << *first_pointer << endl;
	return 0;


}