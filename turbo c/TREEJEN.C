struct node
{
	int data;
	struct node *left,*right;
};
int i=0;
struct node *create()
{
	int d;
	int nodes[]={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
	struct node *newnode;
	//printf("Enter node data: ");
	//scanf("%d",&d);
	d=nodes[i];
	i++;
	if(d==-1)
	{
		//printf("-1 ");
		return 0;

	}
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=d;
	//printf("Enter the left child of %d",d);
	newnode->left=create();
	//printf("Enter the right child of %d",d);
	newnode->right=create();
	return newnode;
}
void preorder(struct node *root)
{
	if(root->data==0)
	{       //printf("-1 ");
		return ;
	}
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
}
void inorder(struct node *root)
{
	if(root->data==0)
		return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}
void postorder(struct node *root)
{
	if(root->data==0)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
}

int lsum=0;
int rsum=0;
void sumoftree(struct node *root)
{
	if(root->data==0)
		return;
	sumoftree(root->left);
	sumoftree(root->right);
	rsum+=root->data;
	//printf("sum = %d ",rsum);
	//return lsum+rsum;
}


void main()
{
	struct node *root;
	root=0;
	clrscr();
	root=create();
	printf("\nRoot = %d\n",root->data);
	printf("\nPreorder of tree\n");
	preorder(root);
	printf("\nInorder of tree\n");
	inorder(root);
	printf("\nPostorder of tree\n");
	postorder(root);
	sumoftree(root);
	printf("\nsum = %d\n",rsum);
	getch();
}