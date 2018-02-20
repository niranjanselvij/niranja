#include <stdio.h>
#include<conio.h>
int main()
{
    int n, j;

    printf("Enter an integer: ");
    scanf("%d",&n);

    for(j=1; j<=10; ++j)
    {
       printf("\n%d",n*j);
    }
}
