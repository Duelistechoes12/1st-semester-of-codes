#include<iostream>
using namespace std;

int main()
{

	int number = 30;
	int* pointer_a;
	pointer_a = &number;

	*pointer_a = 59;

	cout << "First number: " << number << endl;


	return 0;

}