#include<stdio.h>
#include<stdlib.h>
#define maximum(a,b) a>b?a:b
struct node
{
    int data;
    struct node *left,*right;
};
int hot(struct node *root)
{
    if (root==0)
    {
        return 0;
    }
    return (maximum(hot(root->right),hot(root->left)))+1;
}
// rotation of tree
struct node *leftrotate(struct node *root)
{   
    struct node *y=root->right;
    struct node *tt=y->left;
    y->left=root;
    root->right=tt;
    return y;

}
struct node *rightrotate(struct node *root)
{
    struct node *x=root->left;
    struct node *tt=x->right;

    x->right=root;
    root->left=tt;
    return x;

}
int getbalance(struct node *root)
{
    //balance fator of avl tree {-1,0,1}
    return hot(root->left)-hot(root->right);
}
struct node *createbst(struct node *root,int data)
{
    if (root==0)
    {
        root=(struct node *)malloc(sizeof(struct node));
        root->left=root->right=0;
        root->data=data;
        return root;
    }
    if (root->data<data)
    {
        root->right=createbst(root->right,data);
    }
    else if (root->data>data)
    {
        root->left=createbst(root->left,data);
    }
    else
    {
        return root;
    }
    int balance=getbalance(root);
    if (balance > 1 && data < root->left->data)     //ll
    {
        return rightrotate(root);
    }
    if (balance <-1 && data>root->right->data)   //RR
    {
        return leftrotate(root);
    }
    else if (balance > 1 && data >root->left->data) //LR
    {
        root->left=leftrotate(root->left);
        return rightrotate(root);
    }
    else if (balance < -1 && data<root->right->data) //RL
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
void inorder(struct node *root)
{
    if (root==0)
    {
        return;
    }
    inorder(root->left);
    printf(" %d",root->data);
    inorder(root->right);
}
void postorder(struct node *root)
{
    if(root==0)
        return;
    postorder(root->left);
    postorder(root->right);
    printf(" %d",root->data);
}
int dot(struct node *root)
{
    if (root==0)
    {
        return 0;
    }
    int lh=hot(root->left)+hot(root->right)+1;
    return maximum(maximum(lh,dot(root->right)),dot(root->left));
    
}
int main()
{
    struct node *root=0;
    //int a[]={15,1,2,3,4,5,6,7,12,35,78,55};
    int a[]={1,2,10,3,5,6};
    int n=sizeof(a)/sizeof(a[0]),i;
    while (1)
    {
        printf("\nSelect one option :\n1 Create bst\t2 data of root\n3 preorder\t4 inorder\n5 postorder\t6 height of tree\n7 diameter of tree\t8 level view\n0 exit\n"); 
        scanf("%d",&i);
        switch (i)
        {
        case 1:
        for ( i = 0; i < n; i++)
        {
            root=createbst(root,a[i]);
        }
            break;
        case 2:
        printf("\n Data of root %d\n",root->data);
        break;
        case 3:
        printf("\nPreorder of tree \n");
        preorder(root);
        break;
        case 4:
        printf("\nIN order of tree \n");
        inorder(root);
        break;
        case 5:
        printf("\nPost order of tree \n");
        postorder(root);
            break;
        case 6:
        printf("\nHeight of tree %d\n",hot(root));
        break;
        case 7:
        printf("\nDiameter of tree %d\n",dot(root));
        break;
        default:
        printf("\nWrong choice\n");
        break;
        }
    }
}