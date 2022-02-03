// CS 271 - Lab 5
// Program name: lab5functions.c
// Thinh Le
// Mar 1, 2020

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Function 1: accept 2 float pointers and swap the content of 2 addresses
void swap ( float *a, float *b ) {
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
} // end function

// Function 2: fill the array with random float between the range (inclusive)
void fillFloat( float *a, int length, float min, float max ) {
    srand(time(NULL));
    int minInt = (int)min * 10;
    int maxInt = (int)max * 10;
    for (int i = 0; i < length; i++)
        a[i] = (rand() % (maxInt - minInt + 1) + minInt) / 10.0;
} // end function

// Function 3: sort an array of float value using selection sort
int selectionSort( float *a, int length ) {
    int i, j;
    int count = 0;
    for (i = 0; i < length - 1; i++) {
        int min = i;
        for (j = i + 1; j < length; j++)
            if ( *(a + j) < *(a + min) ) {
                min = j;
                count++;
            }
        if (min != i)
            swap( (a + min), (a + i) );
    } // end for
    return count;
} // end function

