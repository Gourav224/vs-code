#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *pre,*next;
};
struct node *head=0,*newnode,*tail;
int count=0;
struct node* create_linklist()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&temp->data);
    temp->next=0;
    temp->pre=0;
    count++;
    printf("Data sucessfully add");
    return temp;
}
void add_last()
{
    newnode=create_linklist();
    if (head==0)
    {
        tail=head=newnode;
    }
    else
    {
        tail->next=newnode;
        newnode->pre=tail;
        tail=newnode;
    }    
}
void add_start()
{
    if (head==0)
    {
        add_last();   
    }
    else
    {    
        newnode=create_linklist();
        newnode->next=head;
        head->pre=newnode;
        head=newnode;
    }
}
void add_specific()
{
    int i,pos;
    printf("\nEnter position : ");
    scanf("%d",&pos);
    if (pos>count +1 || pos<1)
    {
        printf("\nPosition is wrong");
    }
    else if (pos==count+1)
    {
        add_last();
    }
    else
    {
        struct node *temp=head;
        newnode=create_linklist();
        for ( i = 1; i < pos-1; i++)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        newnode->pre=temp;
        temp->next=newnode;
        newnode->next->pre=newnode;
    }    
}
void swap()
{
    int a=head->data;
    head->data=tail->data;
    tail->data=a;
    printf("Element swap sucessully");
}
void display()
{
    struct node *t=head;
    printf("\nLinklist:");
    while (t!=0)
    {
        printf("->%d",t->data);
        t=t->next;
    }
    printf("->null");
}
int main()
{
    while (1)
    {
        int ch;
        printf("\nSelect one option:\n1 for add start\n2 for add specific\n3 for add last\n4 for display\n5 for no. of element in linklist\n6 for swap\n0 for exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            add_start();
            break;
        case 2:
        add_specific();
        break;
        case 3:
        add_last();
        break;
        case 4:
        display();
        break;
        case 5:
        printf("\nTotal no. %d",count);
        break;
        case 6:
        swap();
        break;
        case 0:
        return 0;        
        default:
        printf("Wrong choice");
            break;
        }
    }
}