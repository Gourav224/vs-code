#include<stdio.h>
#include<conio.h>

void main()

{
    int a,b;
    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("%d is Greater Number",a);
    }
    else
    {
        printf("%d is Greater Number",b);
    }
    getch();
}