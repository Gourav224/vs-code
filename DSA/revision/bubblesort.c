#include<stdlib.h>
#include<stdio.h>
int main()
{
    int a[]={9,8,7,4,5,62,2,5,1,3,5};
    int count=sizeof(a)/sizeof(a[0]),i,temp,j;
    printf("Array is : ");
    for ( i = 0; i < count; i++)
    {
        printf(" %d",a[i]);
    }
    //bubble sort
    for ( i = 1; i < count; i++)
    {
        for ( j = 0; j < count-i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nSorted Array is :");
    for ( i = 0; i < count; i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
    
}