#include<iostream>
#include<cmath>
using namespace std;

int main()
{

	double number;
	double root;
	cout << "enter a positive number";
	cin >> number;

	double root = sqrt(number);

	cout << "square root of" << number << " is" << root << endl;

	return 0;
}