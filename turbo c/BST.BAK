struct node
{
	int data;
	struct node *left,*right;
};
struct node *newnode,*leftmost;
struct node * insert(struct node *root,int val)
{
	if(root==0)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->left=0;
		newnode->right=0;
		newnode->data=val;
		return;
	}
	else if(root->data>val)
	{
		root->left=insert(root->left,val);
	}
	else
		root->right=insert(root->right,val);
	return root;
}
void inorder(struct node *root)
{
	if(root==0)
		return 0;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}

int search(struct node *root, int val)
{
	if(root==0)
		return 0;
	else if(root->data>val)      		 //search in Left subtree
		search(root->left, val);
	else if(root->data<val)                  // search in Right Subtree
		search(root->right, val);
	else
		return 1;
}
struct node *IS(struct node *root)
	{
		while(root->left!=0)
			root=root->left;
		//printf("\n%d\n",root->data);
		return root;
	}

struct node *delnode(struct node *root, int key)
{
	if(root==0)
		return 0;
	else if(root->data>key)
		root->left=delnode(root->left,key);
	else if(root->data<key)
		root->right=delnode(root->right,key);
	else    // if root->data==key
	{
		//case 1
		if(root->left==0 && root->right==0)   // case 1- no child
			return 0;

		//case 2
		if(root->left==0)        //case 2- only one child (right child)
			return root->right;
		else if(root->right==0)      //(left child)
			return root->left;
		//case 3 node has two children
		leftmost=IS(root->right);  //left most child in right subtree
		root->data=leftmost->data;
		root->right=delnode(root->right,leftmost->data);
	}
	return root;
}
#define size 10
void main()
{
	int ar[]={6,5,4,8,7,9,1,3,2,11};
	int i;
	int key;
	struct node *root;
	root=0;
	clrscr();
	for(i=0;i<size;i++)
	{
		root=insert(root,ar[i]);
	}
	printf("Root = %d\n",root->data);
	inorder(root);
	printf("Enter a value to be search in Binary Search Tree: ");
	scanf("%d",&key);
	if(search(root,key))
		printf("\nFound\n");
	else
		printf("\nNot found\n");

	printf("\nAfter deletion of root node: \n");
	delnode(root,6);
	printf("\n Root is : %d\nTree : ",root->data);
	inorder(root);
	getch();
}