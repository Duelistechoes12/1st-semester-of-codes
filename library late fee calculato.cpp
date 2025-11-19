#include<iostream>
using namespace std;

int total_fee = 0;

int main()
{

	int books = 0;
	int books_late = 0;

	cout << "\n---Book Fee calculator---\n";

	cout << "late books are 10$ more\n";


	cout << "Please enter non late books:  ";
	cin >> books;
	
	cout << "Please enter late books:";
	cin >> books_late;

	for (int row = 1;row <= books;row++)
	{
		cout<<books << " " << "\n";


	}


	
	return 0;

}