#include<stdio.h>
#include<conio.h>
void main()
{
int e,f,g;
printf("enter two numbers");
scanf("%d%d",&e,&f);
g=e;
e=f;
f=g;
printf("%d\t%d",e,f);
}
