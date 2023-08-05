#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head= 0,*newnode,*tail,*temp,*pre;
void createlinklist()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data :");
    scanf("%d",&newnode->data);
    printf("\nData add sucessfully");
    newnode->next=0;
    if(head==0)
    {
        head=tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=tail->next;
    }
}
void swap()
{
    temp=pre=head;
    while (temp->next!=0)
    {
        pre=temp;
        temp=temp->next;
    }
    pre->next=head;
    temp->next=head->next;
    temp=head;
    head=tail;
    tail=temp;
    tail->next=0;
    
}
void display()
{
    struct node *t;
    t=head;
    while (t!=0)
    {
        printf("\t%d",t->data);
        t=t->next;
    }
}
int main()
{
    while (1)
    {
        int ch;
        printf("\nSelect one option :\n1 for Add data\n2 for display\n3for swap\n0 for exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 0:
            return 0;
            break;
        case 1:
        createlinklist();
        break;
        case 2:
        {
            printf("\nLinklist is  ");
            display();
        }    
        break;
        case 3:
        swap();
        break;
        default:
        printf("\nWrong chioce");
            break;
        }
    }
    
}