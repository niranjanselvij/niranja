#include<stdio.h>
#include<conio.h>
void main()
{
int c[10],e=0,i,n,d;
printf("\n Enter n value");
scanf("%d",&n);
printf("\n Enter the values");
for(i=0;i<n;i++)
{
scanf("%d",&c[i]);
e=e+c[i];
}
d=e/n;
printf("\n The avg is %d",c);
}
