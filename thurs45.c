#nclude<stdio.h>
#include<conio.h>
void main()
{
int n,a=0,n1;
printf("enter the number");
scanf("%d",&a);
while(n>0)
{
n1=n%10;
a++;
n=n/10;
}
printf("%d",a);
}
