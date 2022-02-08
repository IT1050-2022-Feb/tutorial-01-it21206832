/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

  //function prototypes
  int minimum(int num1, int num2);
  int maximum(int n1, int n2);
  int multiply(int number1, int number2);

  //function main begins the program execution.
  int main() {
  int no1, no2;
  printf("Enter a value for no 1 : "); //prompt
  scanf("%d", &no1);
  printf("Enter a value for no 2 : ");
  scanf("%d", &no2);
  printf("%d ", minimum(no1, no2)); //function call
  printf("%d ", maximum(no1, no2));
  printf("%d ", multiply(no1, no2));

  return 0; //end of function main
  }

 int minimum(int num1, int num2)
 {
   if(num1 < num2) //check the condition
   {
     return num1; //return value
   }
   else
   {
     return num2;
   }
 }

 int maximum(int n1, int n2)
 {
   if(n1 > n2) //check the condition and return the value
   {
     return n1;
   }
   else
   {
     return n2;
   }
 }

 int multiply(int number1, int number2)
 {
   return number1 * number2; //calculate and return the value
 }