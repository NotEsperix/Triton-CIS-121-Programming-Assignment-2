/******************************************
* Edgardo Richard Ventura                 *
* Week 2                                  *
* Assignment 5                            *
* Frank Alvino                            *
* CIS 121-061                             *
*******************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// define variables
	// syntax data type variable name
	float discper, price, discamt, discprice;
	// input
	cout << "Enter price of the item: ";
	cin >> price;
	cout << "Enter discount percent in decimal form: ";
	cin >> discper;
	//process
	// assignment statement = calculation
	discamt = price * discper;
	discprice = price - discamt;
	// output
	cout << setprecision(2);
	cout << "Discount ammount: $" << setw(8) << discamt << endl;
	cout << "Discount price: $" << setw(8) << discprice << endl;
	return 0;
} // End of main