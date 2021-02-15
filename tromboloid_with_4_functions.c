//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
float input (char a)
{
float n;
printf("Enter the values of %c= ",a);
scanf("%f", &n);
return n;
}

float volume (float h, float d, float b)
{
float volume = (((h*d*b)+(d/b))/3);
return volume;
}

float output(float v, float h, float b, float d)
{
printf("The volume of the tromboloid of height = %0.2f, depth = %0.2f and breadth = %0.2f = %0.2f", h, d, b, v);
}

int main()
{
float v, h, d, b;
h = input('h');
d = input('d');
b = input('b');
v = volume(h,d,b);
output(v,h,d,b);
return 0;
}
