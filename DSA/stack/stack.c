#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 50
int stk[size],top=-1;       
void display()
{
    int i;
    for ( i = top ; i > -1 ;i--)
    {
        printf(" %d ",stk[i]);
    }
    
}
void pop()
{
    if (top == -1)
    {
        printf("***********Stack is underflow *************");
        exit(0);
    }
    else
    {
        top--;
    }
    
    
}
void push(int data)
{
    if (top ==size-1)
    {
        printf("********stack is overflow*********");
        exit(0);
    }
    else
    {
        stk[++top]=data;
        printf("\ndata addition sucessful");
    }
    
    
}
int main()
{
    while (1)
    {
        int data,choice;
        printf("\nPress 1 for add element in stack");
        printf("\nPress 2 for delete element in stack");
        printf("\nPress 3 for display element in stack");
        printf("\nPress 4 for exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        {
            printf("\nEnter elemet in stack   ");
            scanf("%d",&data);
            push(data);
            break;
        }
        case 2:
        {
            pop();
            printf("\nData delete sucessfuliy");
            break;
        }
        case 3:
        {
            printf("\n Stack is :  ");
            display();
        }
        case 4:
        {
            return 0;
        }
        default:
        printf("\nwrong choice");
        break;
        }
    }
    
}