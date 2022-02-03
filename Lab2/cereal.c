// CS 271 - Lab 2
// Program name: cereal.c
// Thinh Le
// Feb 4, 2020

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

   FILE *filePtr;
   // Declaring variables
   char name[30], company[30];
   int calories, protein, fat, sodium, sugar;
   float fiber, carbs;
   int min_pro, max_cal, max_sugar;
   int count = 0;
   
   // Get input from the user
   printf("Please enter the minimum number of grams of protein: ");
   scanf("%d", &min_pro);
   printf("Please enter the maximum number of calories: ");
   scanf("%d", &max_cal);
   printf("Please enter the naximum number of grams of sugar: ");
   scanf("%d", &max_sugar);
   
   printf("\nHere are the cereals that match your criteria: \n\n");
   
   if (( filePtr = fopen("cereal.txt", "r")) == NULL ) 

      printf( "File could not be opened\n" );

   else {  // file open was successful
        
      fscanf(filePtr, " %s%s%d%d%d%d%f%f%d", name, company, &calories, 
                &protein, &fat, &sodium, &fiber, &carbs, &sugar);
      // Check if the data in the first line satisfies the criteria
      if((min_pro <= protein) && (max_cal >= calories) && (max_sugar >= sugar)) {
          
         // if matches then increase count by 1
         count++;
         
         // check and print the company
         if (company[0] == 'G')
              printf("General Mills   ");
         if (company[0] == 'K')
              printf("Kelloggs        ");
         if (company[0] == 'Q')
              printf("Quaker Oats     ");
         
         // print the rest of the data
         printf("%-25s%*d calories\n", name, 4, calories);
         
         if (protein > 1)
            printf("                   - protein%*d grams\n", 17, protein);
         else
            printf("                   - protein%*d gram\n", 17, protein);
         
         if (sugar > 1)
            printf("                   - sugar%*d grams\n\n", 19, sugar);
         else
            printf("                   - sugar%*d gram\n\n", 19, sugar);
      }
      
      while ( !feof( filePtr ) ) {
         
         fscanf(filePtr, " %s%s%d%d%d%d%f%f%d", name, company, &calories, 
                &protein, &fat, &sodium, &fiber, &carbs, &sugar);
         
         // check if the data matches the criteria
         if((min_pro <= protein) && (max_cal >= calories) && (max_sugar >= sugar)) {
            
            // if matches then increase count
            count++;
            
            // check and print the company
            if (company[0] == 'G')
               printf("General Mills   ");
            if (company[0] == 'K')
               printf("Kelloggs        ");
            if (company[0] == 'Q')
               printf("Quaker Oats     ");
            
            // print the rest of the data
            printf("%-25s%*d calories\n", name, 4, calories);
            
            if (protein > 1)
               printf("                   - protein%*d grams\n", 17, protein);
            else
               printf("                   - protein%*d gram\n", 17, protein);
            
            if (sugar > 1)
               printf("                   - sugar%*d grams\n\n", 19, sugar);
            else
               printf("                   - sugar%*d gram\n\n", 19, sugar);
         }
         
      } // end while
      
      // Print the total cereals match the criteria
      if (count > 1)
         printf("%d cereals match your criteria.\n", count);
      else if (count == 0)
         printf("%d cereal match your criteria.\n", count);
      else
         printf("%d cereal matches your criteria.\n", count);
      
      fclose( filePtr );
   } // end else

} // end main
