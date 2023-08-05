struct node
{
	int data;
	struct node *pre;
	struct node *next;
};
struct node *head=0,*newnode,*tail=0;
void display()
{
	struct node *t;
	int i=0;
	t=head;
	clrscr();
	while(t!=0)
	{
		if(i==0)
		{
			printf("Head³%u³-->³0³%d³%u³--> ",t,t->data,t->next);
		}
		else
			printf("³%u³%d³%u³--> ",t->pre,t->data,t->next);
		//if(t->next==0)

		t=t->next;
		i=1;
	}
}
void create()
{
	int d;
	int ch;
	struct node *t;
	t=head;
	while(1)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter data : ");
		scanf("%d",&newnode->data);
		newnode->pre=0;
		newnode->next=0;
		if(head==0)
		{
			head=t=newnode;
		}
		else
		{
			t->next=newnode;
			newnode->pre=t;
			tail=t=newnode;
		}
		display();
		printf("\n Add more node press 1 or 0 :");
		scanf("%d",&ch);
		if(ch==0)
			break;

	}
}
void delete()
{
	//delete from last....
	struct node *temp;
	temp=tail;
	tail=temp->pre;
	temp->pre->next=0;
	free(temp);
}
void main()
{
	int choice;
	clrscr();
	x:
	printf("\nEnter 1 for add new node\n\t2 for delete\n\t3 for Exit");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			create(),display();
			goto x;
		case 2:
			delete(),display();
			goto x;
		case 3:
			exit(0);
		default:
			printf("\nWrong choice entered please enter a valid choice....");
			goto x;
	}
	//create();
	getch();
}