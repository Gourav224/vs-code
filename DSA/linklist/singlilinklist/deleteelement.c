#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=0,*newnode,*temp;
struct node * create_node()
{
    struct node *node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&node->data);
    node->next=0;
    printf("\nData added sucessfully");
    return node;
}
void add_element()
{
    newnode=create_node();
    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=temp->next;
    }
}
void addstart()
{
    newnode=create_node();
    newnode->next=head;
    head=newnode;
}
void add_specific_postion()
{
    int pos,i=1;
    struct node *t=head;
    printf("\nEnter postition : ");
    scanf("%d",&pos);
    newnode=create_node();
    while (i<pos-1)
    {
        t=t->next;
        i++;
    }
    newnode->next=t->next;
    t->next=newnode;
}
void display()
{
    struct node *show=head;
    printf("Linklist :");
    while (show!=0)
    {
        printf("->%d",show->data);
        show=show->next;     
    }
    printf("->Null");
}
void delete_head()
{
    if (head==0)
    {
        printf("\nLinklist is empty");
    }
    else
    {
        struct node *t=head;
        printf("\nElement delete sucessfully");
        head=head->next;
        free(t);
    }
}    
void delete_specific()
{
    if (head==0)
    {
        printf("\nLinklist is empty");
    }
    else
    {    
    int pos; 
    struct node *prevnode=head,*nextnode=head;
    printf("\nEnter position : ");
    scanf("%d",&pos);
    if (pos<1)
    {
        printf("\nEnter Correct position");
        delete_specific();
    }
    for (int i = 1; i < pos; i++)
    {
        prevnode=nextnode;
        nextnode=nextnode->next;
    }
    prevnode->next=nextnode->next;
    free(nextnode);
    printf("\nElement delete sucessfully");
    }
}

void delete_last()
{
    if (head==0)
    {
        printf("\nLinklist is empty");
    }
    else
    {
        struct node *t=head,*prevnode=head;
        while (t->next!=0)
        {
            prevnode=t->next;
            t=t->next;
        }
        free(t);
        prevnode->next=0;
        printf("\nElement delete sucessfully");
    }
}
int main()
{
    while (1)
    {
        int ch;
        printf("\nSelect one option:\n1 for add\n2 for delete\n3 for display\n0 for exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            {
                int a;
                printf("\nSelect one option:\n1 for At last location\n2 for At specific location\n3 for at start\n");
                scanf("%d",&a);
                switch (a)
                {
                case 1:
                    add_element();
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
        {
            int c;
            printf("\nSelect one option:\n1 delete from last\n2 Delete from specific\n3 for delete from head\n");
            scanf("%d",&c);
            switch (c)
            {
            case 1:
                delete_last();
                break;
            case 2:
            delete_specific();    
            break;
            case 3:
            delete_head();
            break;
            default:
            printf("WRONG CHOICE");
                break;
            }
            break;
        }
        case 3:
        display();
        break;
        case 0:
        exit(0);
        break;
        default:
        printf("Wrong Choice");
            break;
        }
    }
    
}
