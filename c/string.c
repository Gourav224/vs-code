#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    printf("Enter number ");
    gets(a);
    strcpy(b,a);
    strrev(b);
    if (!strcmp(b,a))
    {
            printf("y");
    }
    else
    {
        printf("n");
    }
}