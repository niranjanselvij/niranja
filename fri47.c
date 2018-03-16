#include<stdio.h>
#include<conio.h>
int main()
{
int b[50],n,j,i,c;
printf("no.of array elements:");
scanf("%d",&n);
printf("enter the values:");
for(j=0;j<n;j++)

	scanf("%d",&b[50]);
	i=b[0];
	for(j=1;j<n;j++)
	{
		if(i<b[j])
		i++;
	}
	printf("%d",i);
	return 0;


}
