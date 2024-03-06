/******************************************
* Edgardo Richard Ventura                 *
* Week 2                                  *
* Assignment 3                            *
* Frank Alvino                            *
* CIS 121-061                             *
*******************************************/
#include <iostream>
using namespace std;
int main()
{
	// define variables
	// syntax data type variable name
	float length, width, area, cir;
	// input price
	cout << "Enter length of the rectangle: ";
	cin >> length;
	cout << "Enter width of the rectangle: ";
	cin >> width;
	// process phase
	// assignment statement = calculation
	area = length * width;
	cir = 2 * length + 2 * width;
	//output phase
	cout << "Area is: " << area << endl;
	cout << "Circumfrance is: " << cir << endl;
	return 0;
} // End of main