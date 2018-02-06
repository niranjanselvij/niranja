#include<stdio.h>
#include<conio.h>
void main()
{
int f;
printf("enter the year");
scanf("%d",&f);
if(f%4==0)
{
printf("ITS A LEAP YEAR");
}
else
{
printf("SORRY......ITS NOT A LEAP YEAR");
}
return 0;
}
