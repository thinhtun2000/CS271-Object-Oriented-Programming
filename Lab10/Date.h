// Date.h
// Date class definition with overloaded increment operators.
#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date
{   
	friend ostream &operator<<( ostream &, const Date & );   
	static const int days[];
	
public:   
	Date( int m = 1, int d = 1, int y = 1900 ); // default constructor   
	
	void setDay( int );   
	void setMonth( int );   
	void setYear( int );   
	
	int getDay(  ) const;   
	int getMonth( ) const;   
	int getYear( ) const;   
	
	void setDate( int, int, int ); // set month, day, year   
	
	Date &   operator++(); // prefix increment operator   
	
	Date operator++( int ); // postfix increment operator   
	
	bool leapYear( ) const; // is date in a leap year?   
	
	bool endOfMonth( ) const; // is date at the end of month?

private:   
	int month;   
	int day;   
	int year;   
	
	void helpIncrement(); // utility function for incrementing date
}; // end class Date

#endif
