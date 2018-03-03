#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],j,n,b,sum=0;
    printf("enter the limit");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    for(j=0;j<n;j++)
    {
        sum=sum+a[j];
    }
    b=sum/n;
    printf("%d",b);
    
}
