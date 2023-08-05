#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *pre,*next;
};
struct node *head=0,*tail=0,*temp,*newnode;
int count=0;
struct node * create_node()
{
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter data: ");
    scanf("%d",&temp->data);
    temp->next=0;
    temp->pre=0;
    count++;
    printf("Data added sucessfully");
    return temp;
}
void add_last()
{
    newnode=create_node();
    if(head==0)
    {
        head=tail=newnode;
    }
    else
    {
        tail->next=newnode;
        newnode->pre=tail;
        tail=tail->next;
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
        newnode=create_node();
        newnode->next=head;
        head->pre=newnode;
        head=newnode;
    }
}
void add_specific()
{
    int pos;
    printf("\nEnter position : ");
    scanf("%d",&pos);
    if (pos<1 || pos>count+1)
    {
        printf("\nEnter correct position");
        add_specific();
    }
    else if (pos==count+1)
    {
        add_last();
    }
    else
    {
        newnode=create_node();
        temp=head;
        for (int i = 1; i < pos-1; i++)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        newnode->pre=temp;
        temp->next=newnode;
        newnode->next->pre=newnode;
    }    
}
void delete_last()
{
    if (head==0)
    {
        printf("Linklist is empty");
        return;
    }
    if (tail==head)
    {
        free(tail);
        head=0;
        count--;
        printf("\nData delete sucessfully");
    }
    else
    {   
        tail=tail->pre;
        free(tail->next);
        tail->next=0;
        count--;
        printf("\nData delete sucessfully");
    }
}
void delete_start()
{
    if (head==0)
    {
        printf("Linklist is empty");
        return;
    }
    if (head==tail)
    {
        delete_last();
    }
    else
    {
        head=head->next;
        free(head->pre);
        head->pre=0;
        printf("\nData delete sucessfully");
        count--;
    }
}
void delete_specific()
{
    if (head==0)
    {
        printf("Linklist is empty");
        return;
    }
    int pos;
    printf("\nEnter position : ");
    scanf("%d",&pos);
    if (pos<1 || pos>count)
    {
        printf("Enter correct position");
        delete_specific();
    }
    else if (pos==count)
    {
        delete_last();
    }
    else
    {
        temp=head;
        for (int i = 1; i < pos; i++)
        {
            temp=temp->next;
        }
        temp->pre->next=temp->next;
        temp->next->pre=temp->pre;
        free(temp);
        count--;
        printf("\nData delete sucessfully");
    } 
}
void display()
{
    temp=head;
    printf("Linklist:");
    while (temp!=0)
    {
        printf("->%d",temp->data);
        temp=temp->next;
    }
    printf("->null");
}
void swap()
{
    if (head==0)
    {
        printf("Linklist is empty");
    }
    else if (count<4)
    {
        printf("\nOnly %d node in linklist\nPlease add node\n",count);
    }
    else if (count==4)
    {
        struct node *h=head->next,*t=tail->pre;
        h->next=t->next;
        t->pre=h->pre;
        h->pre=t;
        t->next=h;
        temp=h;
        h=t;
        t=temp;
        head->next=h;
        tail->pre=t;
    }
    else 
    {
        struct node *h=head->next,*t=tail->pre;
        t->next=h->next;
        h->pre=t->pre;
        h->next=tail;
        t->pre=head;
        temp=h;
        h=t;
        t=temp;
        head->next=h;
        tail->pre=t;
        h->next->pre=h;
        t->pre->next=t;
        printf("\nswapping sucessfull"); 
    }
}
int main()
{
    while (1)
    {
        int ch,sum;
        printf("\nSelect one option:\n1 for add data\t2 for delete data\n3 for display\t10 for swap head and tail\n0 for exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        {
            printf("\nSelect one option:\n1 for add start\n2 for add specific\n3 for add last\n");
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
            default:
            printf("****WRONG CHOICE****");
                break;
            }
            break;
        }
        case 2:
        {
            printf("\nSelect one option:\n1 for delete start position\n2 for delete specific position\n3 for delete last position\n");
            scanf("%d",&ch);
            switch (ch)
            {
            case 1:
            delete_start();
            break;
            case 2:
            delete_specific();
            break;
            case 3:
            delete_last();
            break;            
            default:
            printf("****WRONG CHOICE****");
                break;
            }
            break;
        }    
        case 3:
        display();
        break;
        case 10:
        swap();
        break;
        case 0:
        return 0;
        break;
        default:
        printf("****WRONG CHOICE****");
            break;
        }
    }
}