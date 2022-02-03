// CS 271 - Lab 4
// Program name: lab4.c
// Thinh Le
// Feb 23, 2020

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "arrayfunctions.h"

int main(void) {

   // Problem 1
   printf("Problem 1\n\n");
   int arrayInt[20];
   fillInteger(arrayInt, 20, -20, 20);
   for (int i = 0; i < 20; i++) {
      printf("%d ", arrayInt[i]);
      if (i == 9)
         printf("\n");
   }
   printf("\n\n");
   findConsecutive(arrayInt, 20);
   printf("\n");

   // Problem 2
   printf("Problem 2\n\n");
   char arrayChar[50];
   fillCharacter(arrayChar, 50, 'a', 'z');
   for (int i = 0; i < 50; i++)
      printf("%c ", arrayChar[i]);
   printf("\n");
   findTriples(arrayChar,50);
   printf("\n\n");

   // Problem 3
   printf("Problem 3\n\n");
   char *wordArray[20];
   wordArray[0] = "one";      wordArray[1] = "two";        wordArray[2] = "three";     wordArray[3] = "four";      wordArray[4] = "five";
   wordArray[5] = "six";      wordArray[6] = "seven";      wordArray[7] = "eight";     wordArray[8] = "nine";      wordArray[9] = "ten";
   wordArray[10] = "eleve";   wordArray[11] = "twelve";    wordArray[12] = "thirteen"; wordArray[13] = "fourteen"; wordArray[14] = "fifteen";
   wordArray[15] = "sixteen"; wordArray[16] = "seventeen"; wordArray[17] = "eighteen"; wordArray[18] = "nineteen"; wordArray[19] = "twenty";
   
   char letter;
   printf("Please enter a character: ");
   letter = getchar();
   while ( !isalpha(letter) ) {
      printf("Please enter a character: ");
      letter = getchar();
   }
   printf("\n");
   findWords(wordArray, 20, letter);
   printf("\n");
   
   // Problem 4
   printf("Problem 4\n\n");
   float arrayFl[10];
   fillFloat(arrayFl, 10, 1.0, 50.0);
   for (int i = 0; i < 10; i++) 
      printf("%.1f  ", arrayFl[i]);
   printf("\n\n");
   printf("The mean value is: %.1f\n", floatMean(arrayFl, 10));
   printf("The minimum value is: %.1f\n", floatMin(arrayFl, 10));
   printf("The maximum value is: %.1f\n", floatMax(arrayFl, 10));
   printf("\n");
}
