#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define s 10
void main()
{
    int a[s],i,j,t,n,ub=s-1,lb=0,mid,f=0;
    srand(time(0));
    printf("Array is  ");
    for ( i = 0; i < s; i++)
    {
        a[i]=1+rand()%20;
        printf(" %d ",a[i]);
    }
    for ( i = 0; i <s; i++)
    {
        for (j = 0; j <s-1-i;j++)
        {
            if (a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
            
        }
        
    }
    printf("\n Sorted arry is  ");
    for ( i = 0; i <s ; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter number ");
    scanf("%d",&n);
    while (lb<=ub)
    {
        mid=(lb+ub)/2;
        if(a[mid]==n)
        {
            printf("Number found");
            f=1;
            break;
        }
        if(n<a[mid])
        ub=mid-1;
        else
        lb=mid+1;
    }
    if (f==0)
    {
        printf("Not found");
    }
    getch();

}