#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data,height;
    struct node *left,*right;
};
#define maximum(a,b) a>b?a:b
int hot(struct node *root)
{
    if (root==0)
        return 0;
    return (maximum(hot(root->right),hot(root->left)))+1;    
}
int getbalance(struct node *root)
{
    return hot(root->left)-hot(root->right);
}
// rotation of tree
struct node *leftrotate(struct node *root)
{
    struct node *x=root->right;
    struct node *y=x->left;
    x->left=root;
    root->right=y;
    return x;
}
struct node *rightrotate(struct node *root)
{
    struct node *x=root->left;
    struct node *y=x->right;
    x->right=root;
    root->left=y;
    return x;
}
struct node *createbst(struct node *root,int data)
{
    if (root==0)
    {
        root=(struct node *)malloc(sizeof(struct node));
        root->right=root->left=0;
        root->data=data;
        return root;
    }
    if (root->data>data)
    {
        root->left=createbst(root->left,data);
    }
    else if (root->data<data)
    {
        root->right=createbst(root->right,data);
    }
    else 
        return root;
    root->height=hot(root);
    int balance=getbalance(root);
    if (balance > 1 && data<root->left->data)
    {
        return rightrotate(root);
    }
    else if (balance < -1 && data > root->right->data)
    {
        return leftrotate(root);
    }
    else if (balance > 1 && data > root->left->data)
    {
        root->left=rightrotate(root->left);
        return leftrotate(root);
    }
    else if (balance < -1 && data < root->right->data)
    {
        root->right=rightrotate(root->right);
        return leftrotate(root);
    }
    else
        return root;
}
void preorder(struct node *root)
{
    if(root==0)
        return;
    printf(" %d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    struct node *root=0;
    //int a[]={15,1,2,3,4,5,6,7,12,35,78,55};
    int a[]={1,20202,3,50,6};
    int n=sizeof(a)/sizeof(a[0]),i;
    for ( i = 0; i < n; i++)
    {
        root=createbst(root,a[i]);
    }
    printf("\n Data of root %d\n",root->data);
    printf("\nPreorder of tree \n");
    preorder(root);
    
}