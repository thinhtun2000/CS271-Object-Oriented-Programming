// CS 271 - Lab 1
// Program name: lab1.c
// Thinh Le
// Jan 28, 2019

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void) {
    
    int digit, number;
    int check = 0;
    // get input for 'digit'
    while (check != 1) {
    printf("Enter the digit to search for: ");
    scanf("%d", &digit);
    if (digit >= 0 && digit < 10)
        check = 1;
    else
        printf("Please re-enter the digit\n");
    } // end while loop
    
    // get input for 'number'
    printf("Enter the number: ");
    scanf("%d", &number);
    
    int newNum = abs(number);
    int length = 0;
    
    // count the number of digits in 'number'
    while ( newNum > 0 ) {
        newNum /= 10;
        length++;
    }
    
    // if the 'digit' is 0 and the 'number' is 0
    // then we should find 1 '0' in the 'number'
    if ( newNum == 0 )
        length = 1;
    
    // count the number of 'digit' found in 'number'
    newNum = abs(number);
    int count = 0;
    while (length > 0) {
        if (digit == (newNum % 10))
            count++;
        newNum /= 10;
        length--;
    }
    
    // print the result
    if (count <= 1)
        printf("%d was found %d time in %d.\n", digit, count, number);
    else
        printf("%d was found %d times in %d.\n", digit, count, number);
        
} // end main function
