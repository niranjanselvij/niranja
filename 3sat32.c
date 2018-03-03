#include <stdio.h>
#include <string.h>
int main()
{
char s[100];
int count=0,j;
clrscr();
printf("\n Enter the sentence:");
scanf("%[^\n]s",s);
for(j=0;s[j]!='\0';j++)
{
if(s[j]==' ')
count++;    
}
printf("\n Number of words are: %d",count+1);
getch();
return 0;
}
