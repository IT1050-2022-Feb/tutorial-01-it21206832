/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

   //function main begin the program execution.
   int main() {

   int distance; 
   float amount;

   printf("Enter Travelled Distance : "); //prompt to user
   scanf("%d", &distance); //read distance

   if(distance <= 30) //cheack whether the distance is less than or equal to 30.
   {
     amount = distance * 50; //calculate the amount 
     printf("Amount : %.2f", amount); //print amount
   }

   else if(distance > 30)
   {
     amount = (30 * distance) + ((distance - 30) *40);
     printf("Amount : %.2f", amount);
   }
   else
   {
     printf("Input is incorrect.");
   }

   return 0; //end of function main.
 }
