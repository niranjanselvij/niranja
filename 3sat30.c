#include <stdio.h>
#include<conio.h>
int main(void) {
	int e,f,c,d,min1,min2,tmin1,tmin2,sub,result,result1;
	scanf("%d %d",&e,&f);
	scanf("%d %d",&c,&d);
	min1=e*60;
	min2=c*60;
	tmin1=min1+f;
	tmin2=min2+d;
	sub=tmin1-tmin2;
	result=sub/60;
	printf("%d\t",result);
	result1=sub%60;
	if(result1==0)
	{
	printf("0");
	}
	else
	printf("%d",result1);
	return 0;	
}
