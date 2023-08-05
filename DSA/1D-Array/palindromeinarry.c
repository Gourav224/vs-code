#include<stdio.h>
#include<conio.h>
#define size 10
#include<stdlib.h>
#include<time.h>
void main()
{
    int a[size],t,i,r,s,temp;
    srand(time(0));
    printf("Array is : ");
    for ( i = 0; i < size; i++)
    {
        a[i]=1+rand()%50+100;
        printf(" %d ",a[i]);
    }
    for ( i = 0; i < size; i++)
    {
        s=r=0;
        t=a[i];
        while (t!=0)
        {
            r=t%10;
            s=s*10+r;
            t=t/10;
        }
        if(a[i]==s)
        {
            printf("\n%d is palindrome",a[i]);
        }
        else
        {
            printf("\n%d is not palindrome",a[i]);
        }
    }
    getch();
}