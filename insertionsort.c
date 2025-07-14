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
for(i=1;i<n;i++)
{
 t=a[i];
 j=i-1;
 while(j>=0 && a[j]>t)
 { 
  a[j+1]=a[j];
  j--;
 }
 a[j+1]=t;
}
 printf("\nafter sort \n");
for(i=0;i<n;i++)
{
printf("%d \t",a[i]);
}
}
