#include<stdio.h>
#include<conio.h>
void main()
{
char str[30],str1[40];
int j,i;
printf("enter 2 strings");
gets(str);
gets(str1);
while(str[j]!='\0')
{
    j++;
    
}
while(str1[i]!='\0')
{
    str[j]=str1[i];
    j++;
    i++;

}

puts(str);
}
