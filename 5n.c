#include<stdio.h>
#include<conio.h>
void main()
{
    int e,f,g;
    printf("enter the value of e:");
    scanf("%d",&e);
    printf("enter the value of f:");
    scanf("%d",&f);
    printf("enter the value of g:");
    scanf("%d",&g);
  if(e>f&&e>g)
  {
      printf("the number %d is greatest among 3 numbers",e);
  }
  else if(f>e&&f>g)
  {
  printf("the number %d is greatest among 3 numbers",f);
  }
  else 
  printf("the number %d is greatest among 3 numbers",g);
}
