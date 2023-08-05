struct node
{
	int data;
	struct node *next;
};
struct node *temp,*head=0,*rear=0,*newnode;

void display(){
	struct node *temp;
	temp=head;
	while(temp!=0){
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("%d\t",temp->data);
}
char ch;

void create_node()
{
	newnode=(struct node*)calloc(sizeof(newnode));
	printf("Enter data for node: ");
	scanf("%d",&newnode->data);
	newnode->next=0;
	//struct node *temp=0;
	if(head==0){
		temp=head=rear=newnode;

	}
	else {
		temp->next = newnode;
		temp=temp->next;
		rear=temp;
	}

	display();
	printf("\nWant to add more node(y/n)\n");
	ch=getch();
	if(ch == 'y' or ch == 'Y'){
		create_node();
	}

}
void main()
{
	clrscr();
	create_node();
	getch();
}