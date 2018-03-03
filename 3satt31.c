#include<stdio.h>
#include<conio.h>
void main()
{
char str[50],j,c=0;
printf("enter a character");
gets(str);
for(j=0;str[j]!='\0';j++)
{
if(str[j]>'a' &&str[j]<'z')
{
c++;
}
}
printf("%d",c);
}
