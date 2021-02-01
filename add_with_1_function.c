//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main() 
{
   float a, b, sum;
   printf("Enter two no.= ");
   scanf("%f %f", &a, &b);
   sum = a + b;
   printf("Sum of a + b = %f", sum);
   return(0);
}
