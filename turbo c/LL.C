#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=0,*newnode,*temp;


void main()
{
	char ch;
	int i=0;
	clrscr();
	do
	{
		struct node *t;
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("\n\t Enter data : ");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
			head=temp=newnode;
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		i++;
		textcolor(11);
		clrscr();
		printf("\nList is : ");
		t=head;
		while(t!=0)
		{
			if(t==head)
			{textcolor(14);	cprintf("�Head�--->");}
			if(t->next==0)
			{textcolor(11);	cprintf("�%d�%u�",t->data,t->next);}
			else
			{textcolor(10);	cprintf("�%d�%u�--->",t->data,t->next);}
			t=t->next;
		}
		printf("\nAdd more data : press y/n : ");
		ch=getch();
	}while(ch=='y'||ch=='Y');

}