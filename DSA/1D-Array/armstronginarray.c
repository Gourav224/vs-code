#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#define size 10
#include<math.h>
void main()
{
    int a[size],i,r,s,t;
    srand(time(0));
    printf("Array is : ");
    for ( i = 0; i < size; i++)
    {
        a[i]=1+rand()%1000;
        printf(" %d ",a[i]);
    }
    for ( i = 0; i < size; i++)
    {
        int dc=0,temp;
        t=a[i];
        s=r=0;
        while (t!=0)
        {
            t=t/10;
            dc++;
        }
        temp=a[i];
        while (temp!=0)
        {
            r=temp%10;
            s=s+pow(r,dc);
            temp=temp/10;
        }
        if(s==a[i])
        {
            printf("\n%d is armstrong number",a[i]);
        }
        else
        {
            printf("\n%d is not armstrong",a[i]);
        }
        
        
    }
    
    getch();
}