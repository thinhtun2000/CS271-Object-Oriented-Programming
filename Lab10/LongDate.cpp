// Thinh Le - CS 271
// Program name: LongDate.cpp
// Lab 10
// May 4, 2020

#include <iostream>
#include <string>
#include "LongDate.h"
using namespace std;

        const string LongDate::day_name[7] = {"Sunday", "Monday", "Tuesday", 
			"Wednesday", "Thursday", "Friday", "Saturday"};
	const string LongDate::month_name[13] = {"0", "January", "February", "March", "April", "May", 
			"June", "July", "August", "Speteber", "October", "November", "December"};
	
	// constructor
	LongDate::LongDate( int m, int d, int y ) : Date(m, d, y) {
		month = m;
		day = d;
		year = y;
		setDate(m, d, y);
	}

	void LongDate::setDayOfTheWeek( string s ) {
		dayOfTheWeek = s;
	}

	string LongDate::getDayOfTheWeek(  ) const {
		return dayOfTheWeek;
	}

	// set month, day, year
	void LongDate::setDate( int mm, int dd, int yy ) {
		 string s;
		 int yearCode, monthCode, centuryCode, leapYearCode;
	         // calculate the year code
						 
		 yearCode = (yy%100 + yy%100 / 4) % 7;

		 // calculate the month code

		 switch(mm) {
			 case 1: case 10:
				 monthCode = 0;
				 break;						
			 case 2: case 3: case 11:			
				 monthCode = 3;				 
				 break;
			 case 4: case 7:
				 monthCode = 6;
				 break;
			 case 5: monthCode = 1;
				 break;
			 case 6: monthCode = 4;
				 break;
			 case 8: monthCode = 2;
				 break;
			 case 9: case 12:
				 monthCode = 5;
				 break;
		 }

		 if (yy >= 1900 && yy <= 1999)
			 centuryCode = 0;
		 else if (yy >= 2000 && yy <= 2099)
			 centuryCode = 6;
		 else if (yy = 2100)
			 centuryCode = 4;

		 leapYearCode = 0;
		 if ( (yy%4 == 0 && yy%100 != 0) || yy%400 == 0 )
			 if ( mm == 1 || mm == 2 )
				 leapYearCode = 1;

		 int date = (yearCode + monthCode + centuryCode + dd  - leapYearCode) % 7;
		 s = day_name[date];		
		 setDayOfTheWeek(s);
	}		
	
	int day;
	int month;
	int year;
	string dayOfTheWeek;
	
	// utility function for incrementing date
	void LongDate::helpIncrement() {
		if (!endOfMonth())
			day++;
		else
			if (month < 12) {
				month++;
				day = 1;
			}
			else // last day of year
			{
				year++;
				month = 1;
				day = 1;
			} // end else
	} // end of helpIncrement

	ostream &operator<<( ostream& os, const LongDate& obj )
	{
		 static string monthName[13] = 
		 {"0", "January", "February", "March", "April", "May", "June", 
		 "July", "August", "Speteber", "October", "November", "December"};
        	os << obj.dayOfTheWeek << ", " << monthName[obj.month] << " "; 
		os << obj.day << ", " << obj.year << endl;
        	return os;
	}
