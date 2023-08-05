int count=0;

struct node
{
	int data;
	struct node *next;
};
struct node *head=0,*temp,*newnode;


// Add Element funtion

void add(int c)
{
	int pos,i=0;
	int f=0;
	struct node *t;
	count++;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter data : ");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(c==1)
	{
		newnode->next=head;
		head=newnode;
	}
	else if(c==2)
	{
		//temp=head;
		x:
		printf("\nEnter position : ");
		scanf("%d",&pos);
		if(pos>count)
		{
			printf("Invalid position....");
			getch();
			goto x;
		}
		else
		{
			f=0;
			i=1;
			t=head;
			while(i<pos)
			{
				f=1;
				t=t->next;
				i++;
			}
			if(f!=0)
			{
				newnode->next=t;
				t->next=newnode;
			}
			else
			{
				newnode->next=head;
				head=newnode;
			}
		}
	}
	else
	{
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
}

//DISPLAY ALL NODE

void display()
{
	struct node *t;
	clrscr();
	t=head;
	printf("\n List is \n");
	while(t!=0)
	{
		if(t->next!=0){
			printf("ÚÄÄÄÄÅÄÄÄÄÄ¿\n");
			printf("³ %d ³%u ³\n",t->data,t->next);
			printf("ÀÄÄÄÄÅÄÄÄÄÄÙ\n");
			printf("     ³\n");
		}
		else
		{
			printf("ÚÄÄÄÄÅÄÄÄÄÄ¿\n");
			printf("³ %d ³ %u   ³\n",t->data,t->next);
			printf("ÀÄÄÄÄÁÄÄÄÄÄÙ\n");

		}
		t=t->next;

	}
}
void main()
{
	int ch,cc;
	while(1) {
	//clrscr();

	printf("\n Press 1 for Add new element ");
	printf("\n Press 2 for display");
	printf("\n Press 0 for exit\t: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\n Press 1 for Add at begining \n2 for specific position\n3 for last\0 for back");
			scanf("%d",&cc);

			add(cc);
			break;
		case 2:
			display();
			break;
		case 0:
			exit(1);
			break;
		default:
			printf("\nWrong choice");
			exit(1);
	}
	}

}