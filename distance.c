//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float input(char h)
{
float n;
printf("Enter point %c =",h);  
scanf("%f",&n);  
return n;
}

float distance ()
{
float dis,x1,x2,y1,y2;
dis = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

void output (float dis)
{
printf("The distance between (x1,y1) and (x2,y2) = %0.2f", dis);
}

int main()
{
float dis,a,b,c,d;
a = input('x');
b = input('y');
c = input('x');
d = input('y');
dis = distance();
output(dis);
}
