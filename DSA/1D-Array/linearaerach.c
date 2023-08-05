#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max_size 100
int main()
{
    int a[max_size],i,n,f=0,item;
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
        //scanf("%d",&a[i]);
        a[i]=1+rand()%50;
    }
    printf("Array is : .......|     |     |     |     |");
    for (i = 0; i < n; i++)
    {
        printf("%3d   |",a[i]);
    }
    printf("     |     |     |     |.......");
    printf("\nEnter element for searching : ");
    scanf("%d",&item);
    for ( i = 0; i < n/2; i++)
    {
        if (a[i]==item)
        {
            f=1;
            break;
        }
        else if (a[n-1-i]==item)
        {
            f=1;
            break;
        }       
    }
    if (f==1)
    {
        printf("Element found");
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}
    
