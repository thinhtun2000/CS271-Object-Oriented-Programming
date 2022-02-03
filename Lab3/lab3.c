// CS 271 - Lab 3
// Program name: lab3.c
// Thinh Le
// Feb 17, 2020

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "lab3functions.h"

int main(void) {
   
   // test the factors function
   factors( 12, 20 );
   factors( 24, 42 );

   // test the timeDisplay funtion
   timeDisplay(25503);
   timeDisplay(45678);

   // test the rollingDice function
   rollingDice( 1000 );
   rollingDice( 500 );

} // end main
