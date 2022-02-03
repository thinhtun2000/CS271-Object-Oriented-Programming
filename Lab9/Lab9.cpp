// Cs 271 - Lab 9
// Program name: Lab9.cpp
// Thinh Le
// April 27, 2020

#include <iostream>
#include <iomanip>
#include "Term.h"

using namespace std;

int main ( ) {
	// instantiate a Term object with coefficient 2 and exponent 3
	Term k(5, 3);
	cout << "The term k is: " << k << endl;

	// instantiate another Term object (default coefficient is 0 and 
	// default exponent is 0
	Term r;
	
	// input r from the user
	cout << "Enter a Term in the format a^b where a is the coefficient"
	     << " and b is the exponent.  ";
	
	cin >> r;
	
	cout << "The sum of k and r is " << (k + r) << endl;

	// Testing -
	cout << "Enter a Term in the format a^b where a is the coefficient"
	     << " and b is the exponent.  ";

     	cin >> r;

	cout << "The difference of k and r is " << (k - r) << endl;

	// Testing *
	cout << "Enter a Term in the format a^b where a is the coefficient"
             << " and b is the exponent.  ";

        cin >> r;

	cout << "The sum of k and r is " << (k * r) << endl;
}
