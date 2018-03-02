#include<stdio.h>
#include<conio.h>
void main()
{
int b[10],i,j,temp,n;
printf("enter limit");
scanf("%d",&n);
printf("enter number");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
temp=b[0];
for(i=0;i<n;i++)
{
if(temp>b[i])
{
temp=b[i];
}

}

printf("%d",temp);
}
