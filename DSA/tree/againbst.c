#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data,h;
    struct node *left,*right;
};
struct node *createnode(int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=newnode->right=0;
    return newnode;
}
struct node *createbst(struct node *root,int data)
{
    if (root==0)
    {
        return createnode(data);
    }
    if (root->data>data)
    {
        root->left=createbst(root->left,data);
    }
    else
    {
        root->right=createbst(root->right,data);
    }
    return root;
}
void inorder(struct node *root)
{
    if (!root)
    {
        return;
    }
    inorder(root->left);
    printf(" %d",root->data);
    inorder(root->right);
}
void preorder(struct node *root)
{
    if (root==0)
    {
        return;
    }
    printf(" %d",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root)
{
    if(root==0)
        return;
    postorder(root->left);
    postorder(root->right);
    printf(" %d",root->data);
}
#define maximum(a,b) a>b?a:b
int hot(struct node *root)
{
    if (root==0)
    {
        return 0;
    }
    return (maximum(hot(root->right),hot(root->left)))+1;
}
int dot(struct node *root)
{
    if (!root)
    {
        return 0;
    }
    int lh=hot(root->left),rh=hot(root->right);
    int cdia=lh+rh+1;
    return maximum(maximum(cdia,dot(root->right)),dot(root->left));
}
#define size 100
struct node *q[size];
int f=-1,r=-1;
void enqueue(struct node *data)
{
    if (f==-1)
    {
        f=r=0;
        q[r]=data;
    }
    else
    {
        q[++r]=data;
    }
}
void dequeue()
{
    if (f==r)
    {
        f=r=-1;
    }
    else
    {
        f++;
    }
}
void leveltraversal(struct node *root)
{
    enqueue(root);
    while (f!=-1)
    {
        root=q[f];
        dequeue();
        printf(" %d",root->data);
        if (root->left)
        {
            enqueue(root->left);
        }
        if (root->right)
        {
            enqueue(root->right);
        }        
    }    
}
void levelview(struct node *root)
{
    enqueue(root);
    enqueue(0);
    while (f!=-1)
    {
        root=q[f];
        dequeue();
        if (root==0)
        {
            if (f==-1)
            {
                return;
            }
            printf("\n");
            enqueue(0);
            continue;
        }
        printf(" %d",root->data);
        if(root->left)
            enqueue(root->left);
        if (root->right)
        {
            enqueue(root->right);
        }
    }    
}
void leftview(struct node *root)
{
    enqueue(0);
    enqueue(root);
    while (f!=-1)
    {
        root=q[f];
        dequeue();
        if(root==0)
        {
            if (f==-1)
                return;
            root=q[f];
            dequeue();
            printf("\n%d",root->data);
            enqueue(0);
        }    
        if(root->left)
            enqueue(root->left);
        if(root->right)
            enqueue(root->right);        
    }    
}
void rightview(struct node *root)
{
    enqueue(0);
    enqueue(root);
    while (f!=-1)
    {
        root=q[f];
        dequeue();
        if (root==0)
        {
            if(f==-1)
                return;
            root=q[f];
            dequeue();
            printf("\n%d",root->data);
            enqueue(0);
        }
        if(root->right)
            enqueue(root->right);
        if(root->left)
            enqueue(root->left);
    }
}
int map[100];
int lsize=0;
void topview(struct node *root)
{
    lsize=hot(root);
    for (int i = 0; i <2*lsize; i++)
    {
        map[i]=-1;
    }
    f=r=-1;
    enqueue(root);
    root->h=lsize;
    while (f!=-1)
    {
        root=q[f];
        dequeue();
        if (map[root->h]==-1)
        {
            map[root->h]=root->data;
        }
        if (root->left)
        {
            enqueue(root->left);
            root->left->h=root->h-1;
        }
        if (root->right)
        {
            enqueue(root->right);
            root->right->h=root->h+1;
        }
    }   
}
struct node *leftmostinright(struct node *root)
{
    while (root->left!=0)
    {
        root=root->left;
    }
    return root;    
}
int flag=0;
struct node *deletenode(struct node *root,int key)
{
    if (root==0)
    {
        return 0;
    }
    else if (root->data>key)
    {
        root->left=deletenode(root->left,key);
    }
    else if (root->data<key)
    {
        root->right=deletenode(root->right,key);
    }
    else if (root->data=key)
    {
        flag=1;
        struct node *temp;
        if (root->left==0)
        {
            temp=root->right;
            free(root);
            return temp;
        }
        if (root->right==0)
        {
            temp=root->left;
            free(root);
            return temp;
        }
        temp=leftmostinright(root->right);
        root->data=temp->data;
        root->right=deletenode(root->right,temp->data);
    }
    return root;    
}
int main()
{
    struct node *root=0;
    int a[]={20,25,23,28,26,27,9,14,13,11,10,8};
    int s=sizeof(a)/sizeof(a[0]),i,ch;
    while (2)
    {
        printf("\nSelect one option\n1 create bst\t2 data of root\n3 inorder\t4 preorder\n5 postorder\t6 level traverse\n7 level view\t8 left view\n9 right view\t10 top view\n11 height\t12 diameter\n13 delete node\t0 exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            for ( i = 0; i < s; i++)
            {
                root=createbst(root,a[i]);
            }
            break;
        case 2:
        printf("\nData of root %d\n",root->data);
        break;
        case 3:
        printf("\nInorder of tree \n");
        inorder(root);
        break;
        case 4:
        printf("\nPreorder of tree\n");
        preorder(root);
        break;
        case 5:
        printf("\nPost order of tree\n");
        postorder(root);
        break;
        case 6:
        printf("\nLevel traverse of tree\n");
        leveltraversal(root);
        break;
        case 7:
        printf("\nLevel view of tree\n");
        levelview(root);
        break;
        case 8:
        printf("\nLeft View of tree\n");
        leftview(root);
        break;
        case 9:
        printf("\nRight view of tree\n");
        rightview(root);
        break;
        case 10:
        printf("\ntop view of tree\n");
        topview(root);
        for ( i = 0; i <2*lsize; i++)
        {
            if (map[i]!=-1)
            {
                printf(" %d",map[i]);
            }
            
        }
        
        break;
        case 11:
        printf("\nHeight of tree %d ",hot(root));
        break;
        case 12:
        printf("\ndiameter of tree %d",dot(root));
        break;
        case 13:
        printf("\nEnter data : ");
        scanf("%d",&ch);
        root=deletenode(root,ch);
        if (flag)
        {
            printf("deletion sucessful");
        }
        else
            printf("node not found");
        break;
        case 0:

        default:
            break;
        }
    }
    
}