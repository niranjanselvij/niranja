#include <stdio.h>
#include<conio.h>
int main(void)
{
int e,f,c,d,k;
scanf("%d",&f);
k=f%10;
e=f/10;
c=e%10;
d=e/10;
printf("%d\t%d\t%d\t",d,c,k);
return 0;
}
