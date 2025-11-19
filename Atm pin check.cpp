#include <iostream>
using namespace std;

int main()
{

	int pin;

	cout << "enter your pin number";
	cin >> pin;

	while (pin != 1234)
	{
		cout << "wrong pin enter again" << endl;
		cin >> pin;

	}

	cout << "access granted" << endl;
	return 0;
}