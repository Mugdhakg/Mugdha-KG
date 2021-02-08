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
void output(float n)
{
  printf("The sum is %f",n);
}
 int main()
{
 float x,y,z;
 x=input();
 y=input();
 z=sum(x,y);
 output(z);
 return 0;
}
