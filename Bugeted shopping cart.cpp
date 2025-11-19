#include<iostream>
using namespace std;

int main()
{
	int budget;
	cout << "enter your budget:  ";
	cin >> budget;

		int total_spent=0;
		int item_count = 0;

		int price;
		do
		{
			cout << "\nenter item price(0 to checkout):  ";
			cin >> price;


			bool price_is_valid = false;
			while (price_is_valid == false)
			{
				if (price == 0)
				{

					price_is_valid = true;


				}
				else if (price < 0)
				{
					cout << "price cannot be negative. Re-enter:  ";
					cin >> price;
				}
				else
				{
					int remaining = budget - total_spent;

					if (price > remaining)
					{


						cout << "over budget!Remaining is" << remaining << "Re-enter a smaller price(or 0 to checkout): ";

						cin >> price;
					}
					else
					{
						price_is_valid = true;
					}
				}


			}
			if (price > 0)
			{
				total_spent = total_spent + price;
				item_count = item_count + 1;
			}
		} while (price != 0);

		cout << "Summary" << endl;
		cout << "\nItems purchased:    " << item_count << "\n";
		cout << "Total spent:  " << total_spent << "\n";
		cout << "remaining:   " << (budget - total_spent) << "\n";

		return 0;

}