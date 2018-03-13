#include<stdio.h>
#include<conio.h>
void swap(int *e,int *f)
{
int temp=*e;
*e=*f;
*f=temp;
}
int main()
{
int e,f;
printf("enter e:");
scanf("%d",&e);
printf("enter e:");
scanf("%d",&f);
swap(&e,&f);
printf("after swapping e=%d and f=%d",e,f)
return 0;
}
