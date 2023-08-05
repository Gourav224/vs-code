#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max_size 100
void search(int *a,int s,int n)
{
    if (s>=0)
    {
        if (a[s]==n)
        {
            printf("Element found");
        }
    else
        {
            search(a,s-1,n);
        }
    }
    else
    {
        printf("element not found");
    }
    
}
int main()
{
    int a[max_size],i,n=10,item;
    printf("Array is : .......|     |     |     |     |");
    for (i = 0; i < n ; i++)
    {
        a[i]=1+rand()%50;
        printf("%3d   |",a[i]);
    }
    printf("     |     |     |     |.......");
    printf("\nEnter element for searching : ");
    scanf("%d",&item);
    search(a,n,item);
    return 0;
}
    
