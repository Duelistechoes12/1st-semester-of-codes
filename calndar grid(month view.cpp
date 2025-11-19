#include<iostream>
using namespace std;

int main()
{
	const int total_weeks = 5, days_week = 7;
	int days;

	int day_number = 1;

	cout << " Please enter day number: ";
	cin >> days;



	for (int row=1;row <= total_weeks;row++)
	{
		for (int column=1;column <= days_week;column++)
		{
			if (day_number <= days)
			{
				if (day_number <= 9)
				{
					cout << day_number << "  ";
				}
				else
				{
					cout << day_number << " ";
				}
				

				day_number = day_number + 1;
			}
			else
			{
				return 0;
			}
			

		}
		cout << "\n";

	}

	return 0;

}