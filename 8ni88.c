include <stdio.h>
#include<conio.h>
int main()
{
  int n1, n2, a, b, c;
  printf("Enter two numbers intevals: ");
  scanf("%d %d", &n1, &n2);
  printf("Prime numbers between %d and %d are: ", n1, n2);
  for(a=n1+1; b<n2; ++a)
  {
      c=0;
      for(b=2; b<=a/2; ++b)
      {
        if(a%b==0)
        {
          c=1;
          break;
        }
      }
      if(c==0)
        printf("%d ",a);
  }
  return 0;
}
