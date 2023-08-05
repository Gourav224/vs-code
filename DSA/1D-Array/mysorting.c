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
    
    printf("\n");
    for ( i = 0; i < s; i++)
    {
        for (j = 0; j < s; j++)
        {
            if (a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        
        }
      
    }
    printf("Sorted array is :  ");
    for ( i = 0; i < s; i++)
    {
        printf(" %d ",a[i]);
    }
    getch();
    
    
}