#include<stdio.h>
#include<conio.h>
void main()
{
char str[50],j,c=0;
printf("enter the word");
gets(str);
for(j=0;str[j]!='\0';j++)
{
if(str[j]=='.')
{
c++;
}
}
printf("%d",c+1);
}
