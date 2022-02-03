// CS 271 - Lab 3
// Program name: lab3functions.c
// Thinh Le
// Feb 17, 2020

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "lab3functions.h"

void factors (int a, int b) {
   printf("The common factor are: \n");
   for (int i = 1; i < a; i++)
      if ( a % i == 0 && b % i == 0 )
         printf("%d\n", i);
} // end factors function

void timeDisplay (int a) {
   int hour = 0;
   int minute = 0;
   int second = 0;
   hour = a / 3600;
   minute = (a - hour * 3600) / 60;
   second = (a - hour * 3600 - minute * 60) % 60;
   printf("The time is %02d:%02d:%02d.\n", hour, minute, second);
} // end timeDisplay function

void rollingDice (int n) {
   srand(time(NULL));
   int sum;
   int dice[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
   for (int i = 1; i <= n; i++) {
      sum = rand() % 6 + 1;
      sum += rand() % 6 + 1;
      dice[sum] += 1;
   }
   printf("Dice Total     Frequency\n");
   printf("----------     ---------\n");
   for (int i = 2; i <= 12; i++) {
      printf("%5d%16d\n", i, dice[i]);
   }
} // end rollingDice function

