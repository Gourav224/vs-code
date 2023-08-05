#include<stdio.h>
#include<conio.h>

void main()
{
    float a,b,c,d;
    printf("Enter Sales Amount: ");
    scanf("%f",&a);
    if ((a!=0)&&(a>0))
    {
        if ((a>=100000))
        {
            b=0.1*a;
            printf("Total Commission: 10%%\n");
            printf("Total Commission Amount: %f",b);
        }
        if ((a<100000)&&(a>=50000))
        {
            c=0.07*a;
            printf("Total Commission: 7%%\n");
            printf("Total Commission Amount: %f",c);
        }
        if ((a<50000)&&(a>=20000))
        {
            d=0.05*a;
            printf("Total Commission: 5%%\n");
            printf("Total Commission Amount: %f",d);
        }
        if (a<20000)
        {
            printf("ZERO COMMISSION Sales Amount is Less than 20k");
        }
    }
    else
    {
        printf("SALES Amount cannot be ZERO or NEGATIVE");
    }   
    getch();
}