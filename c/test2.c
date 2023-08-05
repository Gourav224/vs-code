#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
    int a;
    srand(time(0));
    a=25+rand()%26;
    printf("%d",a);
    getch();
}