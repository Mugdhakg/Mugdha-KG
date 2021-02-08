//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int main ()
{
    float n, i, sum, value;
    printf("Enter the number of numbers = ");
    scanf("%f",&n);
    
    printf("Enter %0.2f numbers = \n",n);
    
    for(i=1; i<=n; i++)
    {
        scanf("%f", &value);
        sum = sum+value;
        
    }
    printf("Sum of the entered %f numbers = %10.2f", n,sum);
    return 0;
}
