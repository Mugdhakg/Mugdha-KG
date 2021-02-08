//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
float input()
{
float n;
printf("Enter point = ");
scanf("%f",n);
return n;
}

float distance (float a, float b);
{
float dis;
dis = a-b;
return dis;
}

void output (float dis, float a, float b)
{
printf("The distance between %10.2f and %10.2f = %10.2f", a,b,dis);
}

int main()
{
float (a,b,dis,distance);
a = input();
b = input();
distance = dis(a,b);
output = (a,b, distance);
return 0;
}
