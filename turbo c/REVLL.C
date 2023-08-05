struct node
{
	int data;
	struct node *next;
};
struct node *newnode,*head=0,*pnode,*cnode,*nnode;
int c=0;
void display()
{
	struct node *t;
	t=head;
	while(t!=0)
	{
		c++;
		printf("\t%d",t->data);
		t=t->next;
	}

}
void create()
{
	struct node *temp;
	printf("\n Enter data in node: ");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		head=temp=0;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}

}
void main()
{
	int i=1;
	char ch;
	clrscr();
	while(1)
	{
		printf("Enter node data ");
		create();
		printf("create more nodes : press one 1 \nFor display list \npress 2 or exit press 0 : ");
		ch=getch();
		if(ch==2)
			display();
		if(ch==0)
			exit(0);
	}

}