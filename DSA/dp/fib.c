#include<stdio.h>
int sarr[100];
int fib(int n)
{
    if (sarr[n]!=-1)
        return sarr[n];
    return sarr[n]=fib(n-1)+fib(n-2);
}
int main()
{
    int n,i;
    printf("Enter the no. of terms in series : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
        sarr[i]=-1;
    sarr[0]=0;
    sarr[1]=1;
    printf("\nFibonacci series is : ");
    for ( i = 0; i < n; i++)
        printf(" %d ",fib(i));
}