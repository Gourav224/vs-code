struct node
{
	int data;
	struct node *left, *right;
};

struct node *create()
{
	struct node *newnode;
	int data;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf(" enter node data (-1 for no node : )");
	scanf("%d",&data);

	if(data == -1)
		return 0;
	newnode->data=data;
	printf("Enter left child of %d",data);
	newnode->left=create();
	printf("Enter right child of %d",data);
	newnode->right=create();
	return newnode;
}
void preorder(struct node *root)
{
	if(root!=0)
	{
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void main()
{
	struct node *root;
	//int i,a[]={4,3,2,-1,-1,1,-1,-1,5,6,-1,-1,7,-1,-1},data;
	clrscr();
	//for(i=0;i<15;i++)
	root=create();
	printf("Root Node is: %d\n",root->data);
	preorder(root);
	getch();
}