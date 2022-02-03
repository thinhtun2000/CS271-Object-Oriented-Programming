// LongDate.h
// LongDate class definition with overloaded increment operators.
#ifndef LONGDATE_H
#define LONGDATE_H

#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class LongDate : public Date
{
        static const string day_name[];
	static const string month_name[];

	friend ostream &operator<<( ostream &, const LongDate & );

public:
        LongDate( int, int, int ); // default constructor

	void setDayOfTheWeek( string );

	string getDayOfTheWeek(  ) const;

	void setDate( int, int, int ); // set month, day, year                                    
	
private:
	int day;
	int month;
	int year;
	string dayOfTheWeek;

	void helpIncrement(); // utility function for incrementing date
}; // end class LongDate

#endif
