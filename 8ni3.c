#include<stdio.h>
#include<conio.h>
void main()
{
    int e,f,g;
    
    printf("enter the numbers");
    scanf("%d",&e);
    printf("Enter the power ");
    scanf("%d",&f);
    g=pow(e,f);
    printf("The power of the number is %d",g);
    getch();
}
