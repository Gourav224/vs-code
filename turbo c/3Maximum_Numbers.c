#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    printf("Enter Three Numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if ((a>b)&&(a>c))
    {
        printf("%d is Greater Number",a);
    }
    if ((b>a)&&(b>c))
    {
        printf("%d is Greater Number",b);
    }
    if ((c>b)&&(c>a))
    {
        printf("%d is Greater Number",c);
    }   
           
    getch();
}