#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6};
    int i,count=sizeof(a)/sizeof(a[0]),t;
    int j=count -1;
    printf("Array is ");
    for ( i = 0; i < count; i++)
    {
        printf(" %d ",a[i]);
    }
    //reverse an array
    for ( i = 0; i < count/2; i++,j--)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    printf("\nReverse Array is ");
    for ( i = 0; i < count; i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;    
}