#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=0,*tail=0,*newnode,*temp;
int count=0;
struct node * create_node()
{
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&temp->data);
    temp->next=0;
    count++;
    printf("\nData added sucessfully");
    return temp;
}
void add_last()
{
    newnode=create_node();
    if (head==0)
    {
        head=tail=newnode;
        tail->next=head;
    }
    else
    {
        tail->next=newnode;
        tail=tail->next;
        tail->next=head;
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
        head=newnode;
        tail->next=newnode;
    }
}
void add_specific_position()
{
    int pos;
    printf("\nEnter postition : ");
    scanf("%d",&pos);
    if (pos<1 || pos>count+1)
    {
        printf("Enter correct position");
        add_specific_position();
    }
    else if (pos == count+1)
    {
        add_last();
    }
    else if (pos == 1)
    {
       add_start();
    }
    else
    {     
        int i=1;
        temp=head;
        newnode=create_node();
        while (i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    
}
void display()
{
    temp=head;
    printf("Linklist:");
    for (int i = 0;i<count;i++ )
    {
        printf("->%d",temp->data);
        temp=temp->next;
    }
    printf("->head");
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
        while (t->next!=tail)
        {
            prevnode=t->next;
            t=t->next;
        }
        free(t);
        if (count==1)
        {
            head=tail=0;
        }
        else
        prevnode->next=head;
        count--;
        printf("\nElement delete sucessfully");
    }
}
void delete_head()
{
    if (head==0)
    {
        printf("\nLinklist is empty");
    }
    else if (count==1)
    {
        delete_last();
    }
    else
    {
        struct node *t=head;
        printf("\nElement delete sucessfully");
        head=head->next;
        tail->next=head;
        free(t);
        count--;
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
        if (pos<1 || pos>count)
        {
            printf("\nEnter Correct position");
            delete_specific();
        }
        else if (pos==count)
        {
            delete_last();
        }
        else if (pos==1)
        {
            delete_head();
        }
        else        
        {    
            for (int i = 1; i < pos; i++)
            {
                prevnode=nextnode;
                nextnode=nextnode->next;
            }
            prevnode->next=nextnode->next;
            free(nextnode);
            count--;
            printf("\nElement delete sucessfully");
        }
    }
}
int main()
{
    while (1)
    {
        int ch;
        printf("\nSelect one option:\n1 for add start\n2 add last\n3 add specific\n4 display\n5 for delete last\n6 for delete head\n7 for delete specific position\n0 for exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            add_start();
            break;
        case 2:
        add_last();
        break;
        case 3:
        add_specific_position();
        break;
        case 4:
        display();
        break;
        case 5:
        delete_last();
        break;
        case 6:
        delete_head();
        break;
        case 7:
        delete_specific();
        break;
        case 0:
        return 1;
        default:
            break;
        }
    }
}