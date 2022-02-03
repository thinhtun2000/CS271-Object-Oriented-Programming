// CS 271 - Lab 8
// Program name: Calendar.cpp
// Thinh Le
// April 13, 2020

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Time.h"
#include "Date.h"

using namespace std;

int main ( ) {

   const int MAX_HOUR = 24;
   const int MAX_MINUTE = 60;
   const int MAX_SECOND = 60;

   srand(time(NULL));

   // Create an array of 5 Time Object
   Time times[5];
   
   // Initialize them
   int h0 = rand() % MAX_HOUR;
   int m0 = rand() % MAX_MINUTE;
   int s0 = rand() % MAX_SECOND;
   times[0].setHour(h0);
   times[0].setMinute(m0);
   times[0].setSecond(s0);

   int h1 = rand() % MAX_HOUR;
   int m1 = rand() % MAX_MINUTE;
   int s1 = rand() % MAX_SECOND;
   times[1].setHour(h1);
   times[1].setMinute(m1);
   times[1].setSecond(s1);

   int h2 = rand() % MAX_HOUR;
   int m2 = rand() % MAX_MINUTE;
   int s2 = rand() % MAX_SECOND;
   times[2].setHour(h2);
   times[2].setMinute(m2);
   times[2].setSecond(s2);

   int h3 = rand() % MAX_HOUR;
   int m3 = rand() % MAX_MINUTE;
   int s3 = rand() % MAX_SECOND;
   times[3].setHour(h3);
   times[3].setMinute(m3);
   times[3].setSecond(s3);

   int h4 = rand() % MAX_HOUR;
   int m4 = rand() % MAX_MINUTE;
   int s4 = rand() % MAX_SECOND;
   times[4].setHour(h4);
   times[4].setMinute(m4);
   times[4].setSecond(s4);

   // Print the output
   for (int i = 0; i < 5; i++) {
      cout << "The time is: ";
      times[i].print();
      cout << endl;
   }

   for (int i = 0; i < 5; i++) {
      cout << "The time in 12h format is: ";
      times[i].print12();
      cout << endl;
   }

   // Create an array of 5 Date objects
   Date dates[5];
   
   int enter;

   for (int i = 0; i < 5; i++) {
      cout << "Please enter month: ";
      cin >> enter;
      dates[i].setMonth(enter);
      cout << "Please enter day: ";
      cin >> enter;
      dates[i].setDay(enter);
      cout << "Please enter year: ";
      cin >> enter;
      dates[i].setYear(enter);
   }
   
   cout << endl;

   for (int i = 0; i < 5; i++) {
      cout << "The date entered is: ";
      dates[i].print();
      cout << endl;
			         }
}

