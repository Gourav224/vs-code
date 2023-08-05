#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define c 3
#define r 3
int main()
{
    int a[r][c],i,j,max,min;
    srand(time(0));
    printf("Matrix is :\n");
    for ( i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            a[i][j]=1+rand()%10;
            printf(" %d",a[i][j]);
        }
        printf("\n");
        
    }
    max=min=a[0][0];
    
    for ( i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
            if(a[i][j]<min)
            {
                min=a[i][j];
            }
        }

        
    }
    printf("Maximum = %d ,Minimum = %d",max,min);
    float avg;
    avg=(float)(max+min)/2;
    printf("\nAverage is %.2f",avg);

    return 0;

}
