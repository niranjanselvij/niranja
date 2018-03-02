#include <stdio.h>
#include<stdio.h>
int main()
{
	int n,d,f,j,sum=0;
	printf("enter the series");
	scanf("%d",&n);
	printf("enter the difference and first term");
	scanf("%d%d",&d,&f);
	for(j=0;j<n;j++)
	{
		sum=sum+f;
		f=f+d;
	}
printf("sum is:%d",sum);
return 0;;
}
