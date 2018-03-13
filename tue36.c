#include<stdio.h>
#include<conioh>
void main()
{
char str[50],j,c=0;
printf("enter the word");
gets(str);
for(j=0;str[j]!='\0';j++)
{
if((str[j]>='0')&&(str[j]<='9')||(str[j]>='a')&&(str[j]<='z'))
{
continue;
}
else
{
    c++;
}
}


printf("%d",c);
}
