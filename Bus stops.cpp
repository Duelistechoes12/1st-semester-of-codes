#include<iostream>
using namespace std;

int main()
{
	int capacity;
	int stops;



	cout << "enter bus capacity:";
		cin >> capacity;

		cout << "enter number of stops:  ";
		cin>> stops;


		int people = 0;
		int maxpeople = 0;
		int violations =0 ;
		int safe_count = 0;
			int longestsafe = 0;
		

			for (int stop = 1;stop <= stops;stop++)
			{
				int change;
				cout << "stop  " << stop << ": ";
				cin >> change;

				people += change;

				if (people < 0)
					people = 0;

				if (people > maxpeople)
					maxpeople + people;

				if (people <= capacity)
				{
					safe_count++;
					if (safe_count > longestsafe)
						longestsafe = safe_count;

				}
				else
				{

					violations++;
					safe_count = 0;

				}
			}

			cout << "\n== Trip Summary ==\n   ";
			cout << "maximum occupancy:     " << maxpeople << endl;
			cout << "number of violations:" << violations << endl;
			cout << "longest safe streak:   " << longestsafe << endl;
				


			return 0;
}

	


		



