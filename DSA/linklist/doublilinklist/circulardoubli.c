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
        head->pre=tail;
        tail->next=head;
    }
    else
    {
        tail->next=newnode;
        newnode->pre=tail;
        tail=tail->next;
        head->pre=tail;
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
        head->pre=newnode;
        head=newnode;
        tail->next=head;
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
        head=tail=0;
        count--;
        printf("\nData delete sucessfully");
    }
    else
    {   
        tail=tail->pre;
        free(tail->next);
        tail->next=head;
        head->pre=tail;
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
        head->pre=tail;
        tail->next=head;
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
    while (temp!=tail)
    {
        printf("->%d",temp->data);
        temp=temp->next;
    }
    printf("->%d->head",tail->data);
}
void min_element()
{
    if (head==0)
    {
        printf("Linklist is empty");
        return;
    }
    int min=head->data;
    for (temp=head; temp!=0; temp=temp->next)
    {
        if (min>temp->data)
        {
            min=temp->data;
        }
    }
    printf("\nMinimum = %d",min);
}
void max_element()
{
    if (head==0)
    {
        printf("Linklist is empty");
        return;
    }    
    int max=head->data;
    for (temp=head; temp!=0; temp=temp->next)
    {
        if (max<temp->data)
        {
            max=temp->data;
        }
    }
   printf("\nMaximum = %d",max);
}
int sumofnodes()
{
    int sum=0;
    for (temp=head; temp!=0; temp=temp->next)
    {
        sum+=temp->data;
    }
    return sum;
}
void search()
{
     if (head==0)
    {
        printf("Linklist is empty");
        return;
    } 
    int i=0,d;
    printf("\nEnter data for searching : ");
    scanf("%d",&d);
    for (temp=head; temp!=0;temp=temp->next)
    {
        i++;
        if (d==temp->data)
        {
            break;
        }
    }
    if (temp!=0)
    {
        printf("\n%d element found in %d position",d,i);
    }
    else 
    {
        printf("\n%d element not found",d);
    }   
}
void swap()
{
    if (head==0)
    {
        printf("Linklist is empty");
    }
    else if (head==tail)
    {
        printf("\nOnly one node in linklist\nPlease add node\n");
    }
    else
    {
        tail->next=head->next;
        head->pre=tail->pre;
        head->next->pre=tail;
        tail->pre->next=head;
        temp=tail;
        tail=head;
        head=temp;
        head->pre=0;
        tail->next=0;
        printf("\nswapping sucessfull"); 
    }
}
int main()
{
    while (1)
    {
        int ch,sum;
        printf("\nSelect one option:\n1 for add data\t2 for delete data\n3 for display\t4 for to count no. of nodes\n5 for minimum element\t6 for maximum element\n7 for sum of element\t8 for avg of elements\n9 for search element\t10 for swap head and tail\n0 for exit\n");
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
        case 4:
        printf("\nTotal no. of nodes is %d",count);
        break;
        case 5:
        min_element();
        break;
        case 6:
        max_element();
        break;
        case 7:
        {
            sum=sumofnodes();
            printf("\nSum = %d",sum);
            break;
        }
        case 8:
        {
            float avg;
            sum=sumofnodes();
            avg=(float)sum/count;
            printf("\nAverage = %.2f",avg);
            break;
        }
        case 9:
        search();
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