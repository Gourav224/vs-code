#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define c 3
#define r 3
int main()
{
    int a[r][c],i,j,max,min,t,k;
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
    for (k = 1; k < c; k++)
    {
        for ( i = 0; i < r; i++)
        {
            for (j = 0; j < c-k; j++)
            {
                if(a[i][j]>a[i][j+1])
                {
                    t=a[i][j];
                    a[i][j]=a[i][j+1];
                    a[i][j+1]=t;
                }

            }   
        }
        for ( j = 0; j < r; j++)
        {
            for (i = 0; i < c-k; i++)
            {
                if(a[i][j]>a[i+1][j])
                {
                    t=a[i][j];
                    a[i][j]=a[i+1][j];
                    a[i+1][j]=t;
                }

            }   
        }
    }
       
    for ( i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if(a[i][j]>a[i][j+1])
            {
                t=a[i][j];
            }
        }

        
    }
    
    printf("\nsorted Matrix is :\n");
    for ( i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
        
    }
    return 0;

}
