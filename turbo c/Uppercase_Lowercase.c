#include<stdio.h>
#include<conio.h>

void main()
{
    char a;
    printf("Enter Character: ");
    scanf("%c",&a);
    if ((a>=65)&&(a<=90)||(a>=97)&&(a<=122))
    {
        if ((a>=65)&&(a<=90))
        {
            printf("UPPERCASE Alphabet");
        }
        if ((a>=97)&&(a<=122))
        {
            printf("LOWERCASE Alphabet");
        }
    }
    else
    {
        printf("(%c) not a Alphabet",a);
    }
    getch();
}