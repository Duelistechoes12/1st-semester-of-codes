#include<iostream>
using namespace std;

int main()
{

	const int board_size = 8;

	for (int row = 1;row <= board_size; row++)
	{

		for (int columns = 1;columns <= 4 ; columns++)
		{

			if ((row + columns) % 2 == 0)
			{
				cout << ".#";
			}
			else
			{
				cout << "#.";
			}
		
		
		}
		cout << "\n";
	}

	return 0;

}