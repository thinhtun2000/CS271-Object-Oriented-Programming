// CS 271 - Lab 5
// Program name: lab5.c
// Thinh Le
// Mar 1, 2020

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "lab5functions.h"

int main (void) {
    
    // Create an array of 100 elements
    printf("\nCreate an array with 100 elements.\n");
    float array[100];
    float *a = array;
    
    // Call fillFloat to fill the array with numbers from 1.0 to 100.0
    printf("\nFill the array with elements from 1.0 to 100.0.\n");
    fillFloat( a, 100, 1.0, 100.0 );
    
    // Print out the array after being filled
    printf("\nPrint out the array in 5 columns: \n");
    int count = 0;
    int d = 0;
    int i;
    while (count < 100) {
        for (i = 0; i < 100; i++) {
            if (i % 20 == d) {
                printf("%7.1f", a[i]);
                count++;
            } // end if
        } // end for
        printf("\n");
        d++;
        i = 0;
    } // end while
    printf("\n");
    
    // Call selectionSort to sort the array
    printf("\nUsing selection sort to sort the array above.\n");
    selectionSort(a, 100);
    
    // Print the array again after being sorted
    printf("\nThe array after being sorted: \n");
    count = 0;
    d = 0;
    while (count < 100) {
        for (i = 0; i < 100; i++) {
            if (i % 20 == d) {
                printf("%7.1f", a[i]);
                count++;
            } // end if
        } // end for
        printf("\n");
        d++;
        i = 0;
    } // end while
    printf("\n");
} // end main
