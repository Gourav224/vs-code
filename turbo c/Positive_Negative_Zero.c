#include<stdio.h>
#include<conio.h>

void main()
{
    int a;
    printf("Enter Number: ");
    scanf("%d",&a);
    if (a!=0)
    {
        if (a>0)
        {
            printf("POSITIVE");
        }
        else
        {
            printf("NEGATIVE");
        }
    }
    else
    {
        printf("ZERO");
    }
    getch();
}