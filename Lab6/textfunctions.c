#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "textfunctions.h"

void removePunctuation( char *sth ) {
    
    for (int i = 0; i < strlen(sth); i++) {
        int j;
        if (sth[i] >= 'A' && sth[i] <= 'Z');
        else if (sth[i] >= 'a' && sth[i] <= 'z');
        else if (sth[i] >= '0' && sth[i] <= '9');
        else if (sth[i] == ' ');
        else {
            for (j = i; j < strlen(sth); j++) 
                sth[j] = sth[j+1];
            i--;
        } // end else
    } // end for
    
} // end function

void stringSort( char *sth ) {
    
    // Remove all spaces
    for (int i = 0; i < strlen(sth); i++) {
        int j;
        if (sth[i] == ' ') {
            for (j = i; j < strlen(sth); j++) 
                sth[j] = sth[j+1];
            i--;
        } // end if
    } // end for
    
    // Sorting the array
    for (int i = 0; i < strlen(sth) - 1; i++) {
        for (int k = i; k < strlen(sth); k++) {
            if (sth[k] < sth[i]) {
                // Swaping the character
                char a;
                a = sth[k];
                sth[k] = sth[i];
                sth[i] = a;
            } // end if
        } // end inner for
    } // end outer for
    
} // end function

void blockPrint ( const char *sth ) {
    for (int i = 0; i < strlen(sth); i++) {
        printf("%c", *(sth + i));
        for (int j = i + 1; j < strlen(sth); j++) {
            if (*(sth + i) == *(sth + j)) {
                printf("%c", *(sth + j));
                i++;
            } // end if
            else
                j = strlen(sth);
        } // end for
        printf("\n");
    } // end for
    printf("\n");
} // end function

void wordPrint ( const char *sth ) {
    for (int i = 0; i < strlen(sth); i++) {
        if (sth[i] == ' ')
            printf("\n");
        else
            printf("%c", *(sth + i));
    } // end for
    printf("\n");
} // end function
