struct node
{
	int data;
	struct node *left,*right;
};

struct node *newnode;
int i=0;
struct node * create(int *nodes)
{
	//int nodes[]={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
	int d=nodes[i];
	i++;
	if(d==-1)
		return 0;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=d;

//	printf("%d ",nodes[i]);
	//i++;
	newnode->left=create(nodes);
	newnode->right=create(nodes);
	return newnode;
}
void preorder(struct node *root)
{
	if(root->data==0)
	{
		return;
	}
	else{
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void main()
{
	struct node *root=0;
	int nodes[]={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
	clrscr();
	root=create(nodes);
	//root=1;
	printf("Root of tree is %d\n",root->data);
	preorder(root);
	getch();
}