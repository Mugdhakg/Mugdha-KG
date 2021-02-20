//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct point
{
    int x;
    int y;
};
struct point p1,p2;

struct point input(struct point n)
{
    printf("Enter the x and y coordinates for the point = ");
    scanf("%d",&n.x);
    scanf("%d",&n.y);
    return n;
}

float distance (struct point m, struct point n)
{
    float dis;
    dis = sqrt((n.x - m.x)*(n.x - m.x)) + ((n.y - m.y)*(n.y - m.y));
    return dis;
}

int main()
{ 
    float a;
    p1=input(p1);
    p2=input(p2);
    a=distance(p1,p2);
    printf("The distance between %2d%2d and %2d%2d = %f", p1.x,p1.y,p2.x,p2.y,a);
}
