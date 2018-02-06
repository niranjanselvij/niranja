
#include<stdio.h>
#include<conio.h>
int main()
{
 long long b;
 clrscr();
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &b);
    while(b != 0)
    printf("Number of digits: %d", count);
    getch();
}
