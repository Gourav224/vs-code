#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};
int c=0;
struct node *create_node(int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=newnode->right=0;
    c++;
    return newnode;
}
struct node *create_bst(struct node *root,int data)
{
    if (root==0)
    {
        return create_node(data);
    }
    if (root->data<data)
    {
        root->right=create_bst(root->right,data);
    }
    else 
    {
        root->left=create_bst(root->left,data);
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
void preorder(struct node *root)
{
    if (root==0)
    {
        return;
    }
    printf(" %d",root->data);
    preorder(root->left);
    inorder(root->right);
}
void postorder(struct node *root)
{
    if (root==0)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf(" %d",root->data);
}
int sumoftree(struct node *root)
{
    if (root==0)
    {
        return 0;
    }
    return root->data+sumoftree(root->left)+sumoftree(root->right);
}
#define max(a,b) a>b?a:b
int hot(struct node *root)
{
    if (root==0)
    {
        return 0;
    }
    return (max(hot(root->left),hot(root->right)))+1;
}
int dot(struct node *root)
{
    if (root==0)
    {
        return 0;
    }
    int lh=hot(root->left);
    int rh=hot(root->right);
    int cdia=lh+rh+1;
    return max(max(cdia,dot(root->right)),dot(root->left));
}
#define size 100
struct node *q[size];
int f=-1,r=-1;
void enqueue(struct node *data)
{
    if (r==size-1)
        return;
    else if (f==-1)
    {
        f=r=0;
        q[r]=data;
    }
    else 
        q[++r]=data;
}
void dequeue()
{
    if (r==-1)
        return;
    else if (f==r)
        f=r=-1;
    else
        f++;
}
void leveltravsel(struct node *root)
{
    enqueue(root);
    while (f!=-1)
    {
        root=q[f];
        dequeue();
        printf(" %d",root->data);
        if (root->left)
            enqueue(root->left);
        if(root->right)
            enqueue(root->right);
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
                return;
            printf("\n");
            enqueue(0);
            continue;
        }
        printf(" %d",root->data);
        if(root->left)
            enqueue(root->left);
        if (root->right)
            enqueue(root->right);
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
        if (root==0)
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
        if (root->right)
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
            if (f==-1)
                return;
            root=q[f];
            dequeue();
            printf("\n%d",root->data);
            enqueue(0);
        }
        if (root->right)
            enqueue(root->right);
        if(root->left)
            enqueue(root->left);
    }
}
// void bottamview(struct node *root)
// {
//         if (root==0)
//             return;
//         if(root->left ==0 && root->right==0)
//             printf(" %d",root->data);    
//         bottamview(root->left);
//         bottamview(root->right);
// }
int main()
{
    struct node *root=0;
    while (1)
    {
        //int a[]={10,5,4,3,6,7,8};
        //int a[]={8,5,2,7,12,10,11,6};
        int a[]={8,5,2,7,12,10,11,6,15,20,19,18};
        //int a[]={10,8,16,12,15,6,5,7,9,4,11,13};
        int ch,i,n=sizeof(a)/sizeof(a[0]);
        printf("\nSelect one option\n1 Create BSt\t2 data of root\n3 Preorder\t4 Postorder\n5 Inorder\t6 sum of tree\n7 Average of tree\t8 Level  traversel\n9 for level view\t10 Height of tree\n11 Diameter of tree\t12 Left view\n13 Right view\t14 bottam view\n0 exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
         for ( i = 0; i < n; i++)
         root=create_bst(root,a[i]);
        break;
        case 2:
        printf("\nData of root %d\n",root->data);
        break;
        case 3:
        printf("\nPre order of tree \n");
        preorder(root);
        break;
        case 4:
        printf("\nPost Order of tree\n");
        postorder(root);
        break;
        case 5:
        printf("\nInorder of Tree\n");
        inorder(root);
        break;
        case 6:
        printf("\nSum = %d\n",sumoftree(root));
        break;
        case 7:
        {
            float avg=(float)sumoftree(root)/c;
            printf("\nAverage of tree %f\n",avg);
            break;
        }
        case 8:
        printf("\nLevel travsel of tree\n");
        leveltravsel(root);
        break;
        case 9:
        printf("\nLevel of tree\n");
        levelview(root);
        break;
        case 10:
        printf("\nHeight of tree %d\n",hot(root));
        break;
        case 11:
        printf("\nDiameter of tree %d\n",dot(root));
        break;
        case 12:
        printf("\nLeft view of tree\n");
        leftview(root);
        break;
        case 13:
        printf("\nRight view of tree\n");
        rightview(root);
        break;
        case 14:
        printf("\nBottam View Of tree\n");
        //bottamview(root);
        break;
        case 0:
        return 0;
        default:
        printf("*******Wrong choice************");
            break;
        }
    }
    
}