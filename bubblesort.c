#include <stdio.h>
void main()
{
int n,i,j,t,a[20];
printf("enter no of elements ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("array is \n");
for(i=0;i<n;i++)
{
printf("%d \t",a[i]);
}
for(i=0;i<n-1;i++)
{
 for(j=0;j<n-i-1;j++)
 {
  if(a[j]>a[j+1])
  {
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
   }
 }}
 printf("after sort \n");
for(i=0;i<n;i++)
{
printf("%d \t",a[i]);
}
}
