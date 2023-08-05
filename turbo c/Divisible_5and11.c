#include<stdio.h>
#include<conio.h>

void main()
{
    int a;
    printf("Enter Number to Check: ");
    scanf("%d",&a);
    if ((a%5==0)||(a%11==0))
    {
        if (a%5==0)
        {
            printf("YES! %d is Divisible by 5\n",a);
        }
        if (a%11==0)
        {
            printf("YES! %d is Divisible by 11",a);
        }
    }
    else
    {
        printf("NO! %d is Not Divisible by 5 & 11",a);
    }
    getch();
}