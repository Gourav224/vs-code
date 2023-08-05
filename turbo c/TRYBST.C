#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *left, *right;
};

struct node *newnode;

struct node *insert(struct node *root, int val)
{
	if(root == 0)
	{
		/*newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=val;
		newnode->left=0;
		newnode->right=0;
		return 0;          */
		root=(struct node *)malloc(sizeof(struct node));
		root->left=0;
		root->right=0;
		return root;
	}
	if(val<root->data)
		root->left=insert(root->left, val);
	else
		root->right=insert(root->right, val);
	return root;
}
void inorder(struct node *root)
{
	if(root==0)
	{
		return;
	}
	printf("%d ",root->data);
	inorder(root->left);
	inorder(root->right);
}
void main()
{
	int i, values[]={5,1,3,8,2,7};
	struct node *root=0;
	clrscr();
	for(i=0;i<6;i++)
		root=insert(root,values[i]);
	getch();

}