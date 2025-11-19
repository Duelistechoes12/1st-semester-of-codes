#include<iostream>
using namespace std;

float usd_to_cny(float usd);
float usd_to_zar(float usd);

int main()
{

	float usd_amount;
	char  conversion;
	float total_converge_Y;
	float total_converge_R;
	

	cout << "Enter USD amount: ";
	cin >> usd_amount;


	cout << "Enter conversion type(Y for Yuan or R for Rand): ";
	cin >> conversion;

	if (conversion == 'Y')
	{

		float converge_Y= usd_to_cny(usd_amount);
		cout << "Total convergence of Yuan: " << converge_Y << endl;

	}
	else
	{

		float converge_R = usd_to_zar(usd_amount);
		cout << "Total convergence of Rand: " << converge_R << endl;
	}
	
	

	return 0;

}
float usd_to_cny(float usd)
{

	float bill_converge_Y;
	

	bill_converge_Y = usd * 6.24;
	

	return bill_converge_Y;
	
}
float usd_to_zar(float usd)
{

	float bill_converge_R;

	bill_converge_R = usd * 0.058;

		return bill_converge_R;

}
