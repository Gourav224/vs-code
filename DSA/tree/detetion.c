#include<stdio.h>
#include<stdlib.h>
struct node {
    int data,height;
    struct node *left,*right;
};
struct node *createnode(int data)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=newnode->right=0;
    return newnode;
}
struct node *createbst(struct node *temp,int data)
{
    if (temp==0)
    {
        return createnode(data);
    }
    if (temp->data<data)
    {
        temp->right=createbst(temp->right,data);
    }
    else
    {
        temp->left=createbst(temp->left,data);
    }
    return temp;
}
struct node *leftmostinright(struct node *root)
{
    while (root->left!=0)
    {
        root=root->left;
    }
    return root;
}
struct node *deletenode(struct node *root,int key)
{
    if (root==0)
    {
        return 0;
    }
    else if (root->data<key)
    {
        root->right=deletenode(root->right,key);
    }
    else if (root->data>key)
    {
        root->left=deletenode(root->left,key);
    }
    else if (root->data=key)
    {
        if (root->left==0)
        {
            struct node *temp=root->right;
            free(root);
            return temp;
        }
        if (root->right==0)
        {
            struct node *temp=root->left;
            free(root);
            return temp;
        }
        struct node *temp=leftmostinright(root->right);
        root->data=temp->data;
        root->right=deletenode(root->right,temp->data);
    }
    return root;
}
void inorder(struct node *root)
{
    if(root==0)
        return;
    inorder(root->left);
    printf(" %d",root->data);
    inorder(root->right);
}
#define maximum(s,v) s>v?s:v
int hot(struct node *root)
{
    if (root)
    {
        return (maximum(hot(root->left),hot(root->right))+1);
    }
    
}
void heightinorder(struct node *root)
{
    if(root==0)
        return;
    inorder(root->left);
    root->height=hot(root);
    printf(" %d",root->height);
    inorder(root->right);
}

int main()
{
    struct node *root=0;
    int a[]={8,5,2,7,12,10,11,6,15,20,19,18};
    int n=sizeof(a)/sizeof(a[0]),i,ch;
    while (1)
    {
        printf("\nSelect one option:\n1 create bst\n2 data of root \n3 inorder\n4 delete node\n0 exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            for ( i = 0; i < n; i++)
            {
                root=createbst(root,a[i]);
            }
            break;
        case 2:
        printf("\nData of root %d\n",root->data);
        break;
        case 3:
        printf("\nIn order of tree\n");
        inorder(root);
        printf("\n");
        heightinorder(root);
        break;
        case 4:
        printf("Enter data for deletion : ");
        scanf("%d",&ch);
        root=deletenode(root,ch);
        break;
        case 0:
        return 0;

        default:
        printf("worng choice");
            break;
        }
    }
    
}