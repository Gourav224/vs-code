#include<stdio.h>
#include<stdlib.h>
void merging(int *a,int lb,int mid,int ub)
{
    int b[100];
    int i=lb,j=mid+1,k=lb;
    while (j<=ub && i<=mid)
    {
        if (a[i]<a[j])
        {
            b[k++]=a[i++];
        }
        else
        {
            b[k++]=a[j++];
        }
    }
    while (i<=mid)
    {
        b[k++]=a[i++];
    }
    while (j<=ub)
    {
        b[k++]=a[j++];
    }
    for ( i = lb; i < k; i++)
    {
        a[i]=b[i];
    }
}
void mergesort(int *a,int lb,int ub)
{
    if (lb<ub)
    {
        int mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merging(a,lb,mid,ub);
    }
}
int main()
{
    int a[]={9,8,95,4,3,4,9,1,5,4,85,1,63,4,5,78};
    int count=sizeof(a)/sizeof(a[0]),i;
    printf("Array is :");
    for ( i = 0; i < count; i++)
    {
        printf(" %d",a[i]);
    }
    mergesort(a,0,count-1);
    printf("\nSorted Array is :");
    for ( i = 0; i < count; i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}