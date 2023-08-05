#include<stdio.h>
#include<conio.h>
int main()
{
    int a[]={3,2,5,9,8,7,1,4};
    int n=sizeof(a)/sizeof(a[0]),i,j,key;
    printf("Array is :  ");
    for ( i = 0; i < n; i++)
    {
        printf(" %d",a[i]);
    }
    for ( i = 1; i < n; i++)
    {
        key=a[i];
        for (j= i - 1; (j > -1 && a[j]>key ); j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=key;
    }
    printf("\nSorted array is : ");
    for ( i = 0; i < n; i++)
    {
        printf(" %d",a[i]);
    }
    return 0;    
    
}