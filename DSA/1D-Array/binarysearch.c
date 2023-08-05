#include<stdio.h>
#include<conio.h>
#define max_size 100
int main()
{
    int a[max_size],i,n,mid,item,lb,ub,f=0,t,j;
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
        for ( i = 0; i <n; i++)
    {
        for (j = 0; j <n-1-i;j++)
        {
            if (a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
            
        }
        
    }
    printf("\nsorted Array is : .......|     |     |     |     |");
    for (i = 0; i < n; i++)
    {
        printf("%3d   |",a[i]);
    }
    printf("    |     |     |     |.......");
    printf("\nEnter number for search :");
    scanf("%d",&item);
    lb=0;
    ub=n-1;
    while (lb<=ub)
    {
        mid=(lb+ub)/2;
        if(a[mid]==item)
        {
            printf("Number found %d postion",mid);
            f =1;
            break;
        }
        if(item<a[mid])
        ub=mid-1;
        else
        lb=mid+1;
    }
    if (f==0)
    {
        printf("Not found");
    }
    return 0;
}
    
