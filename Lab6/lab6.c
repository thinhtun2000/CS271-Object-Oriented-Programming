#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "textfunctions.h"

int main (void) {
    char line[80];
    int count;
    FILE *cfPtr;
    if ( (cfPtr = fopen( "lines.dat", "r" )) == NULL) {
        puts( "File could not be opened\n");
    }
    else {
        // input the string
        fgets( line, 80, cfPtr );
        while ( !feof( cfPtr ) ) {
            // print the words in the string
            printf("Words in the string:\n");
            wordPrint( line );
            // remove the punctuation
            removePunctuation( line );
            // print the words
            
            // The function below may take a while to process
            // on the line with all punctuations
            
            printf( "Remove Punctuation: \n");
            wordPrint( line );
            // sort the string
            stringSort( line );
            // print the blocks in the string
            printf( "\nPrint blocks: \n" );
            blockPrint( line );
            fgets( line, 80, cfPtr );
        } // end while
        fclose ( cfPtr );
    } // end else 
} // end main
