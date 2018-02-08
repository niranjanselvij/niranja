#include <stdio.h>
#include<conio.h>
int main(void) {
	int n,d,j,prime=0;
	scanf("%d",&n);
	d=n/2;
	for(j=2;j<=d;j++)

{
	if(n%j==0)
	{
		printf("No");
		prime=1;
		break;
	}
	
}	
if(prime==0)
{
	printf("Yes");
}
	return 0;
}
