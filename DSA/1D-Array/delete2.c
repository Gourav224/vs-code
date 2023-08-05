/*
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
    a[pos-1]=a[n-1];
    
    n=n-1;
    printf("\nNew array is");
    for ( i = 0; i <n; i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\nDeleted element is %d ",item);
    getch();
    
}*/

#include<stdio.h>
#include<conio.h>
#define max_size 100
int main()
{
    int a[max_size],i,n,pos,item;
    printf("Enter the no. of elements ( b/w 1-100)  ");
    scanf("%d",&n);
    if (n>max_size || n<1)
    {
        if (n>max_size)
        {
            printf("Size can't be greater than %d",max_size);
        }
        else
        {
            printf("Size can't be -ve");
        }
        return 0;
    }
    printf("Enter the %d element in array ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array is : .......|     |     |     |     |");
    for (i = 0; i < n; i++)
    {
        printf("%3d   |",a[i]);
    }
    printf("     |     |     |     |.......");
    if (max_size==n)
    {
        printf("\nArray is full");
        return 0;
    }
    printf("\nEnter the postion to delete element in array  :  ");
    scanf("%d",&pos);
    if (pos<0 || pos>n)
    {
        printf("Invalid postion");
        return 0;
    }
    item=a[pos-1];
    a[pos-1]=a[n-1];
    printf("Updated Array is : .......|     |     |     |     |");
    for (i = 0; i < n-1; i++)
    {
        printf("%3d   |",a[i]);
    }
    printf("    |     |     |     |.......");
    return 0;
}
    

