#include<stdio.h>
#include<stdlib.h>
void swap(int *p,int *q)
{
    int t=*p;
    *p=*q;
    *q=t;
}
int partition(int *a,int lb,int ub)
{
    int start=lb,end=ub,pivot=a[lb];
    while (start<end)
    {
        while (a[start]<=pivot)
        {
            start++;
        }
        while (a[end]>=pivot)
        {
            end--;
        }
        if(start<end)
        swap(&a[start],&a[end]);
    }
    swap(&a[lb],&a[end]);
    return end;
}
void quicksort(int *a,int lb,int ub)
{
    if (lb<ub)
    {
        int loc=partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
    
}
int main()
{
    int a[]={9,8,7,4,5,62,2,5,1,3,5};
    int count=sizeof(a)/sizeof(a[0]),i,temp,j;
    printf("Array is :");
    for ( i = 0; i < count; i++)
    {
        printf(" %d",a[i]);
    }
    quicksort(a,0,count-1);
    printf("\nSorted array is :");
    for ( i = 0; i < count; i++)
    {
        printf(" %d",a[i]);
    }
    
}