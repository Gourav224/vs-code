#include<stdio.h>
#include<conio.h>
//#define max_size 50
int main()
{
    int a[]={2,5,8,2,1,7,32,34,12,11};
    int i,j,t;
    int size=sizeof(a)/sizeof(a[0]);
    printf("Array is : ");
    for ( i = 0; i < size; i++)
    {
        printf("%d",a[i]);
    }
    for ( i = 1; i < size; i++)
    {
        for (j = 0; j < size - i; j++)
        {
            if (a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\nSorted array is : ");
    for ( i = 0; i < size; i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
    
}