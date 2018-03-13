#include<stdio.h>
#include<conio.h>
void main()
{
int n,e,f,c,j;
printf("enter the element");
scanf("%d",&n);
e=0;
f=1;
printf("%d%d",e,f);
for(j=1;j<=n;j++)
{
c=e+f;
e=f;
f=c;
printf("%d",c);
}
}
