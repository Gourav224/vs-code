#include<stdio.h>
#include<conio.h>

void main()
{
    char a;
    printf("Enter Character: ");
    scanf("%c",&a);
    if ((a>=65)&&(a<=90)||(a>=97)&&(a<=122))
    {
        printf("YES! (%c) is a Alphabet",a);
    }
    else
    {
        printf("NO! (%c) not a Alphabet",a);
    }
    getch();
}