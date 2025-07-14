#include <stdio.h>
void main()
{
int n,i,t,f,a[20];
printf("enter no of elements ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("element to be searched \n");
scanf("%d",&t);
for(i=0;i<n;i++)
{
if(a[i]==t)
{
printf("element %d found at %d ", t,i+1);
f=1;
break;
}}
if(f!=1)
printf("element not found");
}
