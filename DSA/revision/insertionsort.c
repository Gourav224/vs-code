#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[]={9,8,7,4,5,62,2,5,1,3,5};
    int count=sizeof(a)/sizeof(a[0]),i,temp,j;
    printf("Array is :");
    for ( i = 0; i < count; i++)
    {
        printf(" %d",a[i]);
    }
    //Insertion sort 
    for ( i = 0; i < count; i++)
    {
        int key=a[i];
        j=i-1;
        while (key<a[j] && j >-1)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    printf("\nSorted Array is :");
    for ( i = 0; i < count; i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}