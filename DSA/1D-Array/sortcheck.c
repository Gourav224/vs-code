#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define s 5
void main()
{
    int a[s],t,j,i;
    srand(time(0));
    printf("Array is ");
    for ( i = 0; i < s; i++)
    {
        a[i]=1+rand()%10;
        printf(" %d ",a[i]);
    }
    /*
    for ( i = 0; i < s; i++)
    {
        for (j = 0; j < s-i; j++)
        {
            if (a[j+1]>a[j])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        
        }
      
    }
    printf("\nSorted array is :  ");
    for ( i = 0; i < s; i++)
    {
        printf(" %d ",a[i]);
    }*/
    int f=1;
        for (j = 0; j < s-1; j++)
       {
            if (!(a[j]>=a[j+1]))
            {
                f=0;
            }
        
        }
      
    
    if (f==1)
    {
        printf("\nArray is sorted");
    }
    else 
    {
        printf("\nArray is not sorted");
    }
    getch();     
}