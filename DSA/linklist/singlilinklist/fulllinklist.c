#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=0,*newnode,*tail,*temp,*pre;
int count=0;
struct node * create_node()
{
    struct node *node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&node->data);
    node->next=0;
    printf("\nData added sucessfully");
    count++;
    return node;
}
void add_element()
{
    newnode=create_node();
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
void addstart()
{
    newnode=create_node();
    newnode->next=head;
    head=newnode;
}
void add_specific_position()
{
    int pos,i=1;
    struct node *t=head;
    printf("\nEnter postition : ");
    scanf("%d",&pos);
    if (pos<1 || pos>count+1)
    {
        printf("Enter correct position");
        add_specific_position();
    }
    else if (pos == count+1)
    {
        add_element();
    }
    else
    {     
        newnode=create_node();
        while (i<pos-1)
        {
            t=t->next;
            i++;
        }
        newnode->next=t->next;
        t->next=newnode;
    }
    
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
        for (int i = 1; i < pos; i++)
        {
            prevnode=nextnode;
            nextnode=nextnode->next;
        }
        prevnode->next=nextnode->next;
        free(nextnode);
        printf("\nElement delete sucessfully");
        count--;
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
            prevnode=t;
            t=t->next;
        }
        free(t);
        prevnode->next=0;
        printf("\nElement delete sucessfully");
        count--;
    }
}
/*
void count()
{
    int i=0;
    struct node *c=head;
    while (c!=0)
    {
        c=c->next;
        i++;
    }
    printf("\nTotal element in linklist is %d",i);
}
void swap()
{
    int a=head->data;
    head->data=tail->data;
    tail->data=a;
    printf("Element swap sucessully");
}*/
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
void search()
{
    if (head==0)
    {
        printf("\nLinklist is empty");
    }
    else
    {
        int i=0,d;
        printf("\nEnter data for search : ");
        scanf("%d",&d);
        temp=head;
        while (temp!=0)
        {
            i++;
            if (d==temp->data)
            {
                break;
            }
            
            temp=temp->next;
        }
        if (temp==0)
        {
            printf("Element not found");
        }
        else 
        {
            printf("Elemnt found");
        }
        
        
    }       
}
int main()
{
    while (1)
    {
        int ch;
        printf("\nSelect one option:\n1 for add\n2 for delete\n3 for display\n4 to count element \n5 for swap\n6 for search\n0 for exit\n");
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
                add_specific_position();
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
            case 6:
            search();
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
        case 4:
        printf("Total no. of node is %d",count);
            break;
        case 0:
        exit(0);
        break;
        case 5:
        swap();
        break;
        default:
        printf("Wrong Choice");
            break;
        }
    }
    
}
