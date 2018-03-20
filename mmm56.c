#include <stdio.h>
#include<conio.h>
int main()
{
    int j;
    printf("enter the word");
    scanf("%d",&j);
    if((j=='a'&&j=='z')||(j=='A'&&j=='Z')||(j=='0'&& j=='9'))
    printf("present");
    else
    printf("not present");

    return 0;
}
