#include<stdio.h>
#include<conio.h>
//#define size 10
int main()
{
    int a[]={1,3,4,5,7,10};
    int n=sizeof(a)/sizeof(a[0]);
    int i,data,mid,lb,ub=n-1;
    printf("Array is : ");
    for ( i = 0; i < n; i++)
    {
        printf(" %d",a[i]);
    }
    printf("\nEnter a element delete in array ");
    scanf("%d",&data);
    for ( lb = 0; lb <= ub;)
    {
        mid=(lb+ub)/2;
        if(a[mid]==data)
        {
            break;
        }
        if (a[mid]>data)
        {
            ub=mid-1;
        }
        else
        {
            lb=mid+1;
        }
        
    }
    if (lb>ub)
    {
        printf("Invalid element");
        return 0;
    }
    
    for(i=mid;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    printf("Updated Array is : ");
    for ( i = 0; i < n-1; i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
    
    
}