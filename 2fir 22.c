#include<stdio.h>
#include<conio.h>
int main() 
{
 int j,n;
 int arr[100];
 printf("enter the 1 to 100 value");
 scanf("%d",&n);
 for(j=0;j<n;j++)
 {
  printf("enter the number:",j+1);
  scanf("%d",&arr[j]);
 }
 for(j=0;j<=n;j++)
 {
  if(arr[0]<arr[j])
   a[0]=a[j];
 }
 printf("largest element%d",a[0]);
}
