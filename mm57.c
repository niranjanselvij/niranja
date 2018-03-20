#include<stdio.h>
#include<conio.h>
int main()
{
    int temp,e,b;
    scanf("%d %d",&e,&b);
    temp=e;
    e=b;
    b=temp;
    printf("e:%d\nb:%d",e,b);
    return 0;
}
