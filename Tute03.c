/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
  
  //function main began the program execution.
  int main() {

     int n, count = 1, sum = 0;

     printf("Enter n: "); //prompt
     scanf("%d", &n); //read n

     while(count <= n) 
     {
       sum += count; //calculate sum
       count += 1; //increase count by 1
     }
     
     printf("Sum = %d", sum); //print sum
  
  return 0; //end of function main.
}

