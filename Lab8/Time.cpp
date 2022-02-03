//CS 271 - Lab 8
// Program name: Time.cpp
// Thinh Le
// April 13, 2020

#include <iostream>
#include <iomanip>
#include <string>
#include "Time.h"

using namespace std;

   unsigned int hour;
   unsigned int minute;
   unsigned int second;

   Time::Time() {
      hour = 0;
      minute = 0;
      second = 0;
   }

   Time::Time( int h, int m, int s ) {
      setHour(h);
      setMinute(m);
      setSecond(s);
   }

   void Time::setHour( int h ) {
      if (h >= 0 && h <= 23)
         hour = h;
   }

   void Time::setMinute( int m ) {
      if (m >= 0 && m <= 59)
         minute = m;
   }

   void Time::setSecond( int s ) {
      if (s >= 0 && s <= 59)
         second = s;
   }

   int Time::getHour( ) {
      return hour;
   }

   int Time::getMinute( ) {
      return minute;
   }

   int Time::getSecond( ) {
      return second;
   }

   void Time::print ( ) {
      cout << setfill('0') << setw(2) << hour << ":";
      cout << setfill('0') << setw(2) << minute << ":";
      cout << setfill('0') << setw(2) << second << endl;
   }

   void Time::print12( ) {
      cout << setfill('0') << setw(2) << hour%12 << ":";
      cout << setfill('0') << setw(2) << minute << ":";
      cout << setfill('0') << setw(2) << second << endl;
   }
