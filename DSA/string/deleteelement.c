#include<stdio.h>
#include<conio.h>
#include<string.h>
#define size 20
int main()
{
    char s[size];
    int i,l;
    printf("Enter name : ");
    gets(s);
    do
    {
        //l=0;
        l=strlen(s);
        /*while (s[l]!='\0')
        {
            l++;
        }
         */
        for ( i = 0; i <l-1; i++)
        {   
            s[i]=s[i+1];
        }
        s[i]='\0';
        puts(s);

    } while (l>=2);
}