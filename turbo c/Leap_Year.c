#include<stdio.h>
#include<conio.h>

void main()
{
    int year;
    printf("Enter Number: ");
    scanf("%d",&year);
    if ((year%400==0)||(year%4==0)&&(year%100!=0))
    {
        printf("LEAP YEAR");
    }
    else
    {
        printf("NOT LEAP YEAR");
    }   
    getch(); 
}