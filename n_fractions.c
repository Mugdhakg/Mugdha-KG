//WAP to find the sum of n fractions.
#include<stdio.h>
int main()
{
int a,b,c,d,x,y,i,gcd;
printf("Enter the numerator for the first fraction = ");
scanf("%d", &a);
printf("Enter the denominator for the first fraction = ");
scanf("%d", &b);
printf("Enter the numerator for second fraction = ");
scanf("%d",c);
printf("Enter the denominator for second fraction = ");
scanf("%d", &d);
x = (a*d)+(b*c);
y = b*d;
for(i=1; i<=x <<x && i<=y; ++i)
{
if(x%i==0 && y%i==0)
gcd = i;
}
printf("The added fraction is %d/%d",x/gcd,y/gcd);
printf("\n");
return 0;
} 
