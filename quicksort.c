#include <stdio.h>
void quicksort(int a[], int low, int high)
{
int i=low, j=high, pivot, t;
pivot=a[(low+high)/2];
while(i<=j)
{
 while (a[i]<pivot)
 i++;
 while (a[j]>pivot)
 j--;
 if(i<=j)
 {
  t=a[i];
  a[i]=a[j];
  a[j]=t;
  i++;
  j--;
 }
}
if(low<j)
  quicksort(a,low,j);
if(i<high)
  quicksort(a,i,high);
}

int main()
{
int a[20],n,i;
printf("enter limit ");
scanf("%d",&n);
printf("enter elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
quicksort(a,0,n-1);
printf("sorted array is \n");
for(i=n-1;i>=0;i--)
{
printf(" \t %d",a[i]);
}
return 0;
}

