struct node
{
	int data;
	struct node *left, *right;
};


#define n 20
struct node *q[n];
int front=-1;
int rear=-1;
void add(struct node *root)
{
	if(rear==n-1)
	{
		return ;
		//printf("!*********** Overflow ***********!");
	}
	else if(rear==-1 && front==-1)
	{
		front = rear=0;
		q[rear]=root;
	}
	else
	{
		rear++;
		q[rear]=root;
	}
}
struct node *remove()
{
	if(front==-1)
	{
		return 0;
		//printf("!*********** Queue is Empty ***********!");
	}

	else if(front == rear)
	{
		//printf("\nDeleted element is %d\n",q[front]);

		front=rear=-1;
		return q[front];
	}
	else
	{
		front++;
		return q[front];
		//printf("\nDeleted element is %d\n",q[front]);

	}
}
void display()
{
	int i=front;
	if(front==-1)
		printf("!********* Queue is Empty *********!");
	while(i<=rear)
	{
		printf("³%5d³",q[i++]);
	}
}

int qisEmpty()
{
      if(front == -1)
		return 0;
      else
		return 1;
}
void printLevel(struct node *root)
{
	add(root);
	while(front!=-1)
	{
		struct node *current=remove();   //remove current first element from queue
		//q.remove();
		printf("%d ",current->data);
		if(current->left)
			add(current->left);
		if(current->right)
			add(current->right);
	}
}

struct node *create()
{
	struct node *newnode;
	int data;
	printf(" enter data (-1 for null)");
	scanf("%d",&data);
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=0;
	newnode->right=0;
	if(data == -1)
		return 0;

	printf("\nEnter left child of %d",data);
	newnode->left=create();
	printf("\nEnter right child of %d",data);
	newnode->right=create();
	return newnode;
}

void preorder(struct node *root)
{
	if(root)
	{
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void main()
{
	struct node * root;
	clrscr();
	root=create();
	printf("\nPreorder of Tree: \n");
	preorder(root);
	printf("\n Print level of tree\n");
	printLevel(root);
	getch();
}