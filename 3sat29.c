#include<stdio.h>
#include<conio.h>
int main()
{
int hours=0,minute;
printf("\nenter the minute");
scanf("%d",&minute);
if(minute%60==0)
{
hours=minute/60;
minute=minute%60;
}
printf("\nthe time is  %dhours %dminute ",hours,minute);
return 0;
}
