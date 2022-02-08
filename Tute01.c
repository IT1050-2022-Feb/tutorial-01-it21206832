/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

   //function main began the program execution.
    int main() {

    int mark1, mark2; 
    float avg;

    printf("Enter marks of subject 1: "); //prompt
    scanf("%d", &mark1); //read mark

    printf("Enter marks of subject 2: "); //prompt
    scanf("%d", &mark2); //read mark

    avg = (mark1 + mark2) / 2.0 ; //calculate average

    printf("Average : %.2f", avg); //display the average

   return 0; //end of function main.
   }

