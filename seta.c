#include<stdio.h>
#include<conio.h>
void main()
{
    int n,b=0;
    printf("Enter the natural numbers:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        b=b+i;
    }
    printf("%d",b);
}
