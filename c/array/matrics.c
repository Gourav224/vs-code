#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define c 3
#define r 3
void main()
{
    int a[r][c],i,j;
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
    getch();

}
