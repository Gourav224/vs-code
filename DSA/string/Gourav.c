#include<stdio.h>
#include<conio.h>
int main()
{
    char s[]="Abhishek";
    int i=0;
    while (s[i]!='\0')
    {
        puts(s+i++);
    }
}