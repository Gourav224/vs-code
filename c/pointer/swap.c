#include<stdio.h>
#include<conio.h>
void swap(int *p,int*q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;

}
void main()
{
    int a,b;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d\nb=%d",a,b);
    getch();
}