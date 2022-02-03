// Thinh Le - CS 271
// Program name: Lab10.cpp
// Lab 10
// May 4, 2020

#include <iostream>
#include <iomanip>
#include "LongDate.h"
using namespace std;

int main() {
	int month, day, year;
	cout << "Please enter month, day, year using the format mm dd yyyy" << endl;
	cout << "Enter the month: ";
	cin >> setw(2) >> month;
	cout << "Enter the day: ";
	cin >> setw(2) >> day;
	cout << "Enter the year: ";
	cin >> setw(4) >> year;
	LongDate k(month, day, year);
	cout << "The date after calculation: ";
	cout << k;

}
