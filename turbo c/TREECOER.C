struct node
{
	int data;
	struct node *left,*right;
};
int i=0;
struct node * create()
{
	struct node *newnode;
	int d;
	int nodes[]={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
	d=nodes[i];
	i++;
	if(d==-1)
		return 0;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=d;
	newnode->left=create();
	newnode->right=create();
	return newnode;

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
void preorder(struct node *root)
{
	if(root->data==0)
	{
		printf("-1 ");
		return;
	}
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
}
void main()
{
	struct node *root;
	clrscr();
	root=create();
	printf("\n Root = %d\n",root->data);

	printf("\n In order tree: ");
	inorder(root);
	printf("\n Post order tree: ");
	postorder(root);
	printf("\n Pre order tree: ");
	preorder(root);
	getch();
}