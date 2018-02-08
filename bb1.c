#include<stdio.h>
#include<conio.h>
int main(void) 
{
  int n,y,sum=0,temp;
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
  y=n%10;
  sum=sum+y*y*y;
  n=n/10;
  }
  if(sum==temp)
  {
  	printf("yes");
  }
  else
  {
           printf("no");
  }
}
