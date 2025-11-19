#include<iostream>
using namespace std;

int main()
{

	int number_1;
	number_1 = 5;

	int* pointer1;
	pointer1 = &number_1;

	int number_2;
	number_2 = 6;

	int* pointer2;
	pointer2 = &number_2;

	cout << " number 1 is: " << *pointer1 << endl;
	cout << "number 2 is: " << *pointer2 << endl;

	cout <<*pointer2 <<" is greater" << endl;
	

	return 0;

}