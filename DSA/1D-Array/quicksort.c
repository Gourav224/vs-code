#include<stdio.h>
void swap(int *p,int *q)
{
    int t=*p;
    *p=*q;
    *q=t;
}
int partion(int *a,int lb,int ub)
{
    int start=lb,end=ub,pivot=a[lb];
    while (start<end)
    {
        while (pivot>=a[start])
        {
            start++;
        }
        while (pivot<a[end])
        {
            end--;
        }
        if (start<end)
        {
          swap(&a[start],&a[end]);
        }
    }
    swap(&a[lb],&a[end]);
    return end;
}
void quicksort(int *a,int lb,int ub )
{
    if (lb<ub)
    {
     
        int loc=partion(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}
#include<stdlib.h>
#include<time.h>
int main()
{
    //int a[]={6,3,7,1,3,8,9,7,5};
    //int n=sizeof(a)/sizeof(a[0]):
    int n=20,a[n],lb=0,ub=n-1,i;
    srand(time(0));
    for ( i = 0; i < n; i++)
    {
        a[i]=1+rand()%500;
    }
    
    quicksort(a,lb,ub);
    printf("Sorted array is : ");
    for ( i = 0; i < n; i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}