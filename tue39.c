#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],j,temp;
printf("enter number");
for(j=1;j<=10;j++)
{
scanf("%d",&a[j]);
}
temp=a[1];
for(j=1;j<=10;j++)
{
if(temp<a[j])
{
temp=a[j];
}
}
printf("%d",temp);
}


