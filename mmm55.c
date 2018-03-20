#include<stdio.h>
#include<conio.h>
void main()
{
int c,d,n;
printf("enter 2 number");
scanf("%d%d",&c,&d);
n=c*d;
if(n%2==0)
{
printf("product is even");
}
else
{
printf("product is odd");
}
}
