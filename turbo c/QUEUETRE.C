#define n 5
int q[n];
int front=-1;
int rear=-1;
void enqueue(int a)
{
	if(rear==n-1)
	{
		//printf("!*********** Overflow ***********!");
	}
	else if(rear==-1 && front==-1)
	{
		front = rear=0;
		q[rear]=a;
	}
	else
	{
		rear++;
		q[rear]=a;
	}
}
void dequeue()
{
	if(front==-1)
		printf("!*********** Queue is Empty ***********!");
	else if(front == rear)
	{
		printf("\nDeleted element is %d\n",q[front]);
		front=rear=-1;
	}
	else
	{
		printf("\nDeleted element is %d\n",q[front]);
		front++;
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
void main()
{
	int a,ch;
	clrscr();
	while(1){
	printf("\nSelect an option : \n1 for insert data\n2 for delete data\n3 for display queue\n\n4 for exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		printf("\nEnter data(only int type) : ");
		scanf("%d",&a);
		enqueue(a);
		break;

		case 2:
		dequeue();
		break;

		case 3:
		display();
		break;

		case 4:
		exit(1);
		break;

		default:
		printf("Wrong choice ");
	}
	}
	getch();
}