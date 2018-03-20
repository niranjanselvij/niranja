#include <stdio.h>
#include<conio.h>
int main(void) 
{
	int b[20],j,n,sum=0,avg;
printf("enter the number of values");
scanf("%d",&n);
printf("enter the values");
for(j=0;j<n;j++)
{
scanf("%d",&b[j]);
}
for(j=0;j<=n;j++)
	{
	sum=sum+b[j];
	}
	printf("sum is %d:",sum);
	
	return 0;
}
