#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=0,*newnode,*temp;
struct node* createnode()
{
    struct node *new=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&new->data);
    printf("Data added sucessfully");
    new->next=0;
    return new;
}
void addstart()
{
    newnode=createnode();
    newnode->next=head;
    head=newnode;
}
void add_specific_postion()
{
    int pos,i=1;
    struct node *t=head;
    printf("\nEnter postition : ");
    scanf("%d",&pos);
    newnode=createnode();
    while (i<pos-1)
    {
        t=t->next;
        i++;
    }
    newnode->next=t->next;
    t->next=newnode;
}
void add_last()
{
    newnode=createnode();
    if (head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=temp->next;
    }
}
void display()
{
    struct node *t=head;
    printf("\nlinklist:");
    while (t!=0)
    {
        printf("->%d",t->data);
        t=t->next;
    }   
    printf("->Null");
}
void swap()
{
    int a=head->data;
    head->data=tail->data;
    tail->data=a;
    printf("Element swap sucessully");
}
int main()
{
    while (1)
    {
        int ch;
        printf("\nSelect one option:\n1 add element\n2 for display\n0  for exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            {
                printf("\nSelect one option:\n1 for At last location\n2 for At specific location\n3 for at start\n");
                scanf("%d",&ch);
                switch (ch)
                {
                case 1:
                    add_last();
                    break;
                case 2:            
                add_specific_postion();
                break;
                case 3:
                addstart();
                break;
                default:
                printf("Wrong choice");
                    break;
                }
            }
            break;
        case 2:
        display();
        break;    
        case 0:
        return 0;
        break;
        default:
        printf("Wrong chioce");
            break;
        }        
    }
}