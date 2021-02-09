//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float input()
{
float x1, x2, y1, y2;
printf("Enter point 1 (x1, y1) = ");  
scanf("%f%f", &x1, &y1);  
printf("Enter point 2 (x2, y2) = ");  
scanf("%f%f", &x2, &y2);  
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
float dis,a,b,distance;
a = input();
distance = dis;
output(distance);
}
