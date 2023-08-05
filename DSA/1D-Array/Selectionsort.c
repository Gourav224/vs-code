#include<stdio.h>
int main()
{
    int a[]={2,5,9,6,7,5,2,1};
    int n=sizeof(a)/sizeof(a[0]),i;
    printf("Array is : ");
    for ( i = 0; i < n; i++)
    {
        printf(" %d ",a[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        int j,min=i;
        for ( j = i+1; j < n; j++)
        {
            if (a[min]>a[j])
            {
                min=j;
            }
        }
        if (i!=min)
        {
            int t=a[i];
            a[i]=a[min];
            a[min]=t;
        }
                
    }
    printf("\nSorted Array is : ");
    for ( i = 0; i < n; i++)
    {
        printf(" %d ",a[i]);
    }    
    return 0;
}