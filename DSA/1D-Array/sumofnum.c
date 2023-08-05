#include<stdio.h>
#include<conio.h>
void main()
{
    int num,s,t,i;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=num;i>9;i=s)
    {
        s=0;
        while (i!=0)
        {
            t=i%10;
            s=s+t;
            i=i/10;
        }
        
        
    }
    printf("number is %d\nSum of digit is %d",num,s);
    getch();
        
}