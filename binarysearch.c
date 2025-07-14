#include <stdio.h>
void main()
{
int n,i,j,t,l,h,m,f,a[20];
printf("enter no of elements ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
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
printf("\n element to be searched \n");
scanf("%d",&t);
l=0;
h=n-1;
while(l<=h)
{
 m=(l+h)/2;
 if(a[m]==t)
  {printf("element %d found at %d",t,m+1);
   f=1;
   break;
  }
 else if(a[m]<t)
  l=m+1;
 else
 h=m-1;
}
if(f!=1)
printf("element not found");
}
