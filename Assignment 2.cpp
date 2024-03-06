/******************************************
* Edgardo Richard Ventura                 *
* Week 2                                  *
* Assignment 2                            *
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
	string lname;
	float hrs, payrate, gross;
	// input price
	cout << "Enter your last name: ";
	cin >> lname;
	cout << "Enter hours worked: ";
	cin >> hrs;
	cout << "Enter rate of pay: ";
	cin >> payrate;
	// process phase
	// assignment statement = calculation
	gross = hrs * payrate;
	//output phase
	cout << "Employee: " << lname << endl;
	cout << "Gross pay: " << gross << endl;
	return 0;
} // End of main