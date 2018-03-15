#include<stdio.h>
#include<conio.h>
main()
{
	char c[50],d[50];
	int lc,ld;
	printf("Enter the string:");
	scanf("%s",&c);
	scanf("%s",&d);
	lc=strlen(c);
	ld=strlen(d);
	if(lc>ld)
	{
		printf("\n%s",c);
	}
	else
	{
		printf("\n%s",d);
	}
}
