#include<stdio.h>
#include<conio.h>
#define size 10
int main()
{
    int a[size]={1,3,4,5,7,10};
    int n=6,i,data,j;
    printf("Array is : ");
    for ( i = 0; i < n; i++)
    {
        printf(" %d",a[i]);
    }
    printf("\nEnter a new element in array ");
    scanf("%d",&data);
    for ( i = 0; i < n; i++)
    {
        if(a[i]>=data)
        {
            break;
        }
        
    }
    for ( j = n+1; j > i; j--)
    {
        a[j]=a[j-1];
    }
    a[j]=data;
    printf("Updated array is :  ");
    for ( i = 0; i < n+1; i++)
    {
        printf(" %d",a[i]);
    }
    return 0;    
}