//WAP to find the distance between two point using 4 functions.
#include <stdio.h>

float input()
{
    float n;
    printf("Enter point = ");
    scanf("%f",&n);
    return n;
}

float distance(float a, float b)
{
    float dis;
    dis = a-b;
    return dis;
}

void output(float a, float b, float dis)
{
    printf("The distance between a = %10.2f and b = %10.2f = %10.2f", a,b,dis);
}

int main()
{
    float a,b,dis;
    a=input();
    b=input();
    dis=distance(a,b);
    output(a,b,dis);
    return 0;
}
