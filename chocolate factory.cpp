#include<iostream>
using namespace std;

int main()
{

	int total_rows;
	int total_columns;


	cout << "enter number of rows:  ";
	cin >> total_rows;


	cout << "enter number or colums:   ";
	cin >> total_columns;

	int dark = 0;
	int milk = 0;
	int white = 0;


	for (int row = 1;row <= total_columns;row++)
	{

		for (int column=1; column <= total_columns;column++)
		{
			if (column % 2 == 0)
			{
				cout << "D ";
				dark++;

			}
			else if (row % 2 == 0)
			{

				cout << "M ";
				milk++;

			}
			else
			{
				cout << "W ";
				white++;
			}
		}
		cout << "\n";

	}

	int total_choc = dark + milk + white;

	cout << "Dark Choc:  " << dark << "\n";
	cout << "Milk:  " << milk << "\n";
	cout << "white: " << white << "\n";
	cout << "Total:  " << total_choc << "\n";
	
	return 0;

}