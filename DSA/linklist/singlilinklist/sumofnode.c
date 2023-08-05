#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct  node *head=0,*newnode,*tail;
int c=0;
struct node * create_node()
{   
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&temp->data);
    temp->next=0;
    printf("\nData added sucessully");
    c++;
    return temp;
}
void create_linklist()
{
    newnode=create_node();
    if (head==0)
    {
        head=tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=tail->next;
    }
}
void delete_node()
{
    if (head==0)
    {
        printf("\nLinklist is empty");
    }
    else
    {
        struct node *t=head,*p=head;
        while (t->next!=0)
        {
            p=t;
            t=t->next;
        }
        free(t);
        p->next=0;
        c--;   
        printf("\nElement delete succesfully");     
    }   
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
int max_element()
{
    struct node *t=head;
    int max=t->data;
    while (t!=0)
    {
        if(max<t->data)
        {
            max=t->data;
        }
        t=t->next;
    }
    return max;       
}
int min_element()
{
    struct node *t=head;
    int min=t->data;
    while (t!=0)
    {
        if(min>t->data)
        {
            min=t->data;
        }
        t=t->next;
    }
    return min;       
}
int sumofnode()
{
    struct node *t=head;
    int sum=0;
    while (t!=0)
    {
        sum+=t->data;
        t=t->next;
    }
    return  sum;
}
int main()
{
    while (1)
    {
        int ch,sum,max,min;
        float avg;
        printf("\nselect one option:\n1 for add node\n2 for display node\n3 for delete node\n4 for sum of node\n5 for avg of node\n6 for max element in node\n7 for min element of node\n8 for count node\n0 for exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            create_linklist();
            break;
        case 2:
        display();
        break;
        case 3:
        delete_node();
        break;
        case 4:
        {   
            sum=sumofnode();
            printf("\nsum of linklist is %d",sum);
            break;
        }            
        case 5:
        {
            sum=sumofnode();
            avg=(float)sum/c;
            printf("Avg = %f",avg);
            break;
        }
        case 6:
        {
            //max=max_element();
            printf("MAx =%d",max_element());
            break;
        }
        case 7:
        {
            min=min_element();
            printf("Min = %d",min);
            break;
        }
        case 8:
        printf("Total no. of node is %d",c);
        break;
        case 0:
        return 0;
        default:
        printf("wrong choice");
            break;
        }
    }
    
}