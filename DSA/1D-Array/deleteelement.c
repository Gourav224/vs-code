#include<stdio.h>
#include<conio.h>
#define size 100
void main()
{
    int a[size],n,i,item,pos;
    printf("Enter the no. of element (B/W 1-100) ");
    scanf("%d",&n);
    printf("Enter the  %d  element in array ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array is ");
    for ( i = 0; i < n; i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\nEnter the position do you want delete : ");
    scanf("%d",&pos);
    item=a[pos-1];
    i=pos-1;
    while(i<size-1)
    {
        a[i]=a[i+1];
        i++;
    }
    n=n-1;
    printf("\nNew array is");
    for ( i = 0; i <n; i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\nDeleted element is %d ",item);
    getch();
    
}