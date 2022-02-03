// CS 271 - Lab 7
// Program name: wordFun.cpp
// Thinh Le
// April 6, 2020
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
   // Creating an array of 25 strings
   string words[25];
   int i = 1;

   // Get the first input
   cout << "Type a word (press Ctrl-D to quit) : ";
   getline( cin, words[0] );

   // Sentinel loop 
   while ( i < 25 || !cin.eof() ) {
      
      cout << "Type a word (press Ctrl-D to quit) : ";
      getline( cin, words[i] );
      if  ( cin.eof() ) {
         cout << "Ctrl-D is pressed" << endl;
	 break;
      }
      i++;

   }

   cout << endl;

   // Print the output
   for ( int k = 0; k < i; k++ ) {
      cout << words[k] << endl;
      for ( int j = 0; j < words[k].length(); j++ )
	 cout << words[k][j] << endl;
      cout << endl;
   }
}
