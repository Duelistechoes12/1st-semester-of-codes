#include<iostream>
using namespace std;

int main()
{

	int number;
	number = 12;

	int* pointer1;
	pointer1 = &number;

	cout << "value: " << number << endl;
	cout << "&number: " << &number << endl;

	cout << "Pointer1: " << pointer1 << endl;
	cout << "*Pointer1: " << *pointer1 << endl;

	return 0;


}