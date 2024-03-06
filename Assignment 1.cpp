/******************************************
* Edgardo Richard Ventura                 *
* Week 2                                  *
* Assignment 1                            *
* Frank Alvino                            *
* CIS 121-061                             *
*******************************************/
#include <iostream>
using namespace std;
int main() // execution begin with main
{
	// define variables
	// syntax data type variable name
	int qty;
	float unitprice, extprice;
	// input price
	cout << "Enter the quantity ordered: ";
	cin >> qty;
	cout << "Enter the unit price of the item: ";
	cin >> unitprice;
	// process phase
	// assignment statement = calculation
	extprice = qty * unitprice;
	//output phase
	cout << "The extended price is: $" << extprice;
	return 0;
} // End of main