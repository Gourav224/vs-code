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
    printf("\nEnter a new element in array :  ");
    scanf("%d",&item);
    printf("Enter the postion to insert the new element in array  :  ");
    scanf("%d",&pos);
    if (pos<0 || pos>n+1)
    {
        printf("Invalid postion");
        return 0;
    }
    a[n]=a[pos-1];
    a[pos-1]=item;
    printf("Updated Array is : .......|     |     |     |     |");
    for (i = 0; i < n; i++)
    {
        printf("%3d   |",a[i]);
    }
    printf("    |     |     |     |.......");
    return 0;
}
    
