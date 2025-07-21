#include <stdio.h>

void merge(int a[], int low, int mid, int high)
{
int i=low, j=mid+1, k=0, t[20];
while(i<=mid && j<=high)
{
if(a[i]<a[j])
 t[k++]=a[i++];
 else
 t[k++]=a[j++];
} 
 while(i<=mid)
 t[k++]=a[i++];
 while(j<=high)
 t[k++]=a[j++];
 for(i=low,k=0;i<=high;i++,k++)
 a[i]=t[k];

}
void mergesort(int a[], int low, int high)
{
int mid;
if(low<high)
{
 mid=(low+high)/2;
 mergesort(a,low,mid);
 mergesort(a,mid+1,high);
 merge(a,low,mid,high);
}
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
mergesort(a,0,n-1);
printf("sorted array is \n");
for(i=0;i<n;i++)
{
printf(" \t %d",a[i]);
}
return 0;
}
