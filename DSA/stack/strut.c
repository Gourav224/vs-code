#include<stdio.h>
struct node
{
    int data; 
};
int main()
{
    struct node *a;
    struct node b;
    printf("Enter number : ");
    scanf("%d",&b.data);
    a=&b;
    printf("%d",a->data);
}

