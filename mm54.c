#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("enter the num");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("tne nearest even number is %d",a);
	}
	else
	{
		printf("\n tne nearest even number is %d",a-1);
}
}
