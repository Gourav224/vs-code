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
    // selection sort
    for ( i = 0; i < count-1; i++)
    {
        int item=i;
        for ( j = i+1; j < count; j++)
        {
            if (a[item]>a[j])
            {
                item=j;
            }
        }
        if (item!=i)
        {
            temp=a[i];
            a[i]=a[item];
            a[item]=temp;
        }
    }
    printf("\nSorted Array is :");
    for ( i = 0; i < count; i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}