#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define  size 10
int main()
{
    int a[size],i,max,min;
    srand(time(0));
    printf("Matrix is :\n");
    for ( i = 0;  i <  size;  i++)
    {
        a[i]=1+rand()%20;
        printf(" %d",a[i]);
    }

    max=min=a[0];
    for ( i = 0;  i <  size;  i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Maximum = %d ,Minimum = %d",max,min);
    float avg;
    avg=(float)(max+min)/2;
    printf("\nAverage is %.2f",avg);

    return 0;

}
