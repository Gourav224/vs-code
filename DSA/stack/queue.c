#include<stdio.h>
#include<stdlib.h>
#define size 50
int q[size],f=-1,r=-1,data;
void enqueue(int data)
{
    if (r==size-1)
    {
        printf("\nQueue is overflow");
        exit(0);
    }
    else if (f==-1 && r==-1 )
    {
        f=r=0;
        q[r]=data;
        printf("\ndata addition succesfull");
    }
    else
    {
        q[++r]=data;
        printf("\ndata addition succesfull");        
    }  
}
void dequeue()
{
    if (f == -1)
    {
        printf("\nQueue is underflow");
        exit(0);
    }
    else if (f == r)
    {
        printf("\n %d data delete sucessfully",q[f]);
        f=r=-1;
    }
    else 
    {
        printf("\n %d data delete sucessfully",q[f--]);
    } 
}
void display()
{
    int i;
    if (r==-1)
    {
        printf("\n nothing to display");
        exit(0);
    }
    else
    {
        for ( i = f; i <=r; i++)
        {
            printf(" %d ",q[i]);
        }
    }
}
void isempty()
{
    if(r == -1)
    {
        printf("\nYes");
    }
    else
    {
        printf("\nNo");
    }
}
void isfull()
{
    if (r==size-1)
    {
        printf("\nYes");
    }
    else
    {
        printf("\nNo");
    }
}
int main()
{
    while (1)
    {
        int ch,data;
        printf("\nPress 1 for add data in queue\nPress 2 for delete data in queue\nPress 3 for print queue\nPress 4 for  check queue is empty\nPress 5 for check queue is full\nPress 0 for exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
        {
            printf("\nEnter the data  : ");
            scanf("%d",&data);
            enqueue(data);
            break;
        }
        case 2:
            dequeue();   
            break;
        case 3:
        printf("\nQueue is  ");
        display();
        break;
        case 4:
        isempty();
        break;
        case 5:
        isfull();
        break;
        default:
        printf("\nWrong choice");
            break;
        }
    }
    
}