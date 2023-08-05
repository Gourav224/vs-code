#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define size 10
void main()
{
    int a[size],max,max2,i;
    srand(time(0));
    printf("Array is : ");
    for ( i = 0; i < size; i++)
    {
        a[i]=1+rand()%100;
        printf(" %d ",a[i]);

    }
    max=max2=a[0];
    for ( i = 1; i < size; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for ( i = 0; i <size; i++)
    {
        if (max2<a[i] && a[i]!=max)
        {
            max2=a[i];
        }
        
    }
    printf("\n Second maximum element is %d",max2);
    getch();
    
    
}
