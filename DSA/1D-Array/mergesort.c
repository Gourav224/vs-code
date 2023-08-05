#include<stdio.h>
void merging(int *a,int lb,int mid ,int ub)
{
    int i=lb,j=mid+1,k=lb;
    int b[100];
    while (i<=mid && j<= ub)
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
    int a[]={6,4,2,10,8,5,9,0,3,7,1};
    int n=sizeof(a)/sizeof(a[0]),lb=0,ub=n-1,i;
    mergesort(a,lb,ub);
    printf("Sorted array is  ");
    for ( i = 0; i < n; i++)
    {
        printf(" %d",a[i]);
    }
    return 0;   
}