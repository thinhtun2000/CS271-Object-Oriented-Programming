// CS 271 - Lab 7
// Program name: logTable.cpp
// Thinh Le
// April 6, 2020
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
   
   cout << "Number   Log base 2   Log base 10   Log base e" << endl;
   for (int i = 1; i <= 10; i++) {
      cout << setw(4) << i << setw(13);
      cout << right << setprecision(3) << fixed << log2(i);
      cout << setw(13) << right << setprecision(3) << fixed << log10(i);
      cout << setw(14) << right << setprecision(3) << fixed << log(i);
      cout << endl;
   }
   
}
