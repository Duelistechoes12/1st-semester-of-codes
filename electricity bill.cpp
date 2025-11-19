#include<iostream>
using namespace std;


float calculate_bill(int units);

int main()
{
	int units_scale = 0;

	cout << "Enter your units: ";
	cin >> units_scale;


	int total_bill = calculate_bill(units_scale);

	cout << "Total bill:  " << total_bill << endl;

	return 0;

}
float calculate_bill(int units)
{

	float bill;

	if (units > 0  && units <= 100)
	{
		bill = 1.50 * units;
	}
	else if (units > 101 && units <= 300)
	{

		bill = 2.00 * units;

	}
	else if (units > 301 && units <= 500)
	{

		bill = 3.00 * units;

	}
	else
	{

		bill = 5.00 * units;

	}

	return bill;



}