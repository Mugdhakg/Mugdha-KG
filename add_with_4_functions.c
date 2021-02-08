//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>
float input()
{
    float n;
    printf("Enter number=");
	scanf("%f",&n);
	return n;
}

float sum(float a,float b)
{
    float sum;
    sum=a+b;
    return sum;
}

void output(float a, float b, float n)
{
    printf("The sum of %10.2f and %10.2f is = %10.2f",a,b,n);
}

int main()
{
    float x,y,z;
    x=input();
    y=input();
    z=sum(x,y);
    output(x,y,z);
    return 0;
}
