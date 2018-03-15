#include<stdio.h>
#include<conio.h>
int main()
{
int count=0,b;
printf("enter the number");
scanf("%d",&b);
while(b!=0)
{
b=b/10;
count++;
printf(" count the number%d",count);
}
}
