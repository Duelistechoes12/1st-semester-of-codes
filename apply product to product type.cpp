#include<iostream>
using namespace std;

void apply_discount(double* price);

int main()
{
	
	double product_price = 450.0;

	cout << "Product price: " << product_price<<endl;

	apply_discount(&product_price);

	cout << "Final price:  " << product_price;

	return 0;


}
void apply_discount(double* price)
{

	*price = *price - (*price * 0.10);


}