/******************************************
* Edgardo Richard Ventura                 *
* Week 2                                  *
* Assignment 4                            *
* Frank Alvino                            *
* CIS 121-061                             *
*******************************************/
#include <iostream>
using namespace std;
int main()
{
	// define variables
	// syntax data type variable name
	string Lname;
	float credits, tuition;
	// input price
	cout << "Enter student last name: ";
	cin >> Lname;
	cout << "Enter credits earned: ";
	cin >> credits;
	// process phase
	// assignment statement = calculation
	tuition = credits * 250.00 + 100.00;
	//output phase
	cout << "Sudent last name: " << Lname << endl;
	cout << "Tuition owed: $" << tuition << endl;
	return 0;
} // End of main