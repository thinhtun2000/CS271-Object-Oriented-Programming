// CS 271 - Lab 8
// Program name: Date.cpp
// Thinh Le
// April 13, 2020

#include <iostream>
#include <iomanip>
#include <string>
#include "Date.h"

using namespace std;

   unsigned int month;
   unsigned int day;
   unsigned int year;

   Date::Date() {
      month = 1;
      day = 1;
      year = 1980;
   }

   Date::Date( int m, int d, int y ) {
      setMonth(m);
      setDay(d);
      setYear(y);
   }

   void Date::setMonth( int m ) {
      if ( m >= 1 && m <= 12)
         month = m;
      }

   void Date::setDay( int d ) {
      // 31-day months
      if ( month == 1 || month == 3 || month == 5 || month == 7 ||
                         month == 8 || month == 10 || month == 12 )
         if ( d >= 1 && d <= 31)
            day = d;
      // The one and only Febuary
      if ( month == 2 ) {
         if ( year % 4 == 0 ) {
            if ( d >= 1 && d <= 29)
               day = d;
         }
         else {
            if ( d >= 1 && d <= 28)
               day = d;
         }
      }
      // 30-day months
      if ( month == 4 || month == 6 || month == 9 || month == 11 )
         if ( d >= 1 && d <= 30)
            day = d;
   }
  
   void Date::setYear( int y ) {
      if ( y >= 1980 && y <= 2100 )
         year = y;
   }

   int Date::getMonth( ) {
      return month;
   }

   int Date::getDay( ) {
      return day;
   }

   int Date::getYear( ) {
      return year;
   }

   void Date::print ( ) {
      cout << setfill('0') << setw(2) << month << ":";
      cout << setfill('0') << setw(2) << day << ":";
      cout << year;
   }
