#include <stdio.h>
#include<conio.h>
int main()
{
  int n1, n2, j, temp, num, r;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &n1, &n2);
  printf("Armstrong numbers between %d an %d are: ", n1, n2);
  for(j=n1+1; j<n2; ++j)
  {
      temp=j;
      num=0;
      while(temp!=0)
      {
          r=(temp%10);
          num+=r*r*r;
          temp/=10;
      }
      if(j==num)
      {
          printf("%d ",j);
      }
  }
  return 0;
}
