#include <stdio.h>
void main()
{
int n,i,j,min,t,a[20];
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
 min=i;
 for(j=i+1;j<n;j++)
 { 
  if(a[j]<a[min])
   min=j;
  }
 if(min!=i)
 {
  t=a[i];
  a[i]=a[min];
  a[min]=t;
 }
}
printf("\nafter sort \n");
for(i=0;i<n;i++)
{
printf("%d \t",a[i]);
}
}
