#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data,h,l;
    struct node *left,*right;    
};
int i=0,c=0,s=0;
struct node *create()
{
    //int arr[]={6,5,3,2,-1,-1,6,-1,-1,-1,1,5,-1,-1,7,-1,-1};
    //int arr[]={6,5,6,9,8,-1,-1,10,-1,-1,-1,155,-1,-1,26,104,-1,-1,70,-1,-1};
    int arr[]={5,4,2,3,-1,-1,1,-1,-1,-1,9,6,-1,-1,7,-1,-1};
    int d=arr[i++];
    if (d==-1)
    {
        return 0;
    }
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->left=create();
    newnode->right=create();
    ++c;
    return newnode;
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
    if (root==0)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf(" %d",root->data);
}
int sum(struct node *r)
{
    if (r==0)
    {
        return 0;
    }
    sum(r->left);
    sum(r->right);
    s+=r->data;
    return s;
}
int max(struct node *r,int m)
{   
    if (r!=0)
    {
        if (m<r->data)
        {
            m=r->data;
        }
        m=max(r->left,m);
        m=max(r->right,m);
        return m;
    }
    else
    return m;
}
int min(struct node *r,int m)
{   
    if (r)
    {
        if (m>r->data)
        {
            m=r->data;
        }
        m=min(r->left,m);
        m=min(r->right,m);
        return m;
    }
    else
    return m;
}
#define maximum(a,b) a>b?a:b

int hot(struct node *r)
{
    if(!r)
    return 0;
    return (maximum(hot(r->left),hot(r->right)))+1;
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
int lsize =0;
int maparray[100][100],map[100];
void vt(struct node *root)
{
    lsize=hot(root);
    for (int i = 0; i < lsize*2; i++)
    {
        for(int y=0;y<lsize*2;y++)
            maparray[i][y]=-1;
    }
    f=r=-1;
    root->h=lsize;
    root->l=0;
    enqueue(root);
    while (f!=-1)
    {
        struct node *temp=q[f];
        dequeue();
        if(maparray[temp->h][temp->l]==-1)
        {
           maparray[temp->h][temp->l]=temp->data;
        }
        else if(maparray[temp->h][temp->l+1]==-1)
        {
           maparray[temp->h][temp->l+1]=temp->data;
        }
        if (temp->left)
        {
           enqueue(temp->left);
           temp->left->h=temp->h-1;
           temp->left->l=temp->l+1;
        }
        if (temp->right)
        {
           enqueue(temp->right);
           temp->right->h=temp->h+1;
            temp->right->l=temp->l+1;
        }
    }
        for ( int i = 0; i <2*hot(root); i++)
        {
            for(int j = 0;j<2*lsize;j++)
            {
                if(maparray[i][j]!=-1)
                printf(" %d",maparray[i][j]);
            }
            printf("\n");
        }
    return;
}
void topview(struct node *root)
 {
    lsize=hot(root);
    for (int i = 0; i < lsize*2; i++)
    {
        map[i]=-1;
    }
    f=r=-1;
    root->h=lsize;
    enqueue(root);
     while (f!=-1)
     {
         struct node *temp=q[f];
         dequeue();
         if(map[temp->h]==-1)
         {
            map[temp->h]=temp->data;
         }
         if (temp->left)
         {
            enqueue(temp->left);
            temp->left->h=temp->h-1;
         }
         if (temp->right)
         {
            enqueue(temp->right);
            temp->right->h=temp->h+1;
         }
     }
 }
void bottamview(struct node *root)
{
    lsize=hot(root);
    for (int i = 0; i < lsize*2; i++)
    {
        map[i]=-1;
    }
    f=r=-1;
    root->h=lsize;
    enqueue(root);
     while (f!=-1)
     {
         struct node *temp=q[f];
         dequeue();
            map[temp->h]=temp->data;
         if (temp->left)
         {
            enqueue(temp->left);
            temp->left->h=temp->h-1;
         }
         if (temp->right)
         {
            enqueue(temp->right);
            temp->right->h=temp->h+1;
         }
     }
}
int main()
{
    int m;
    float avg;
    struct node *root;
    root=create();
    printf("Data of root %d",root->data);
    printf("\nPostorder is ");
    postorder(root);
    printf("\ninorder  ");
    inorder(root);
    printf("\npreorder is ");
    preorder(root);
    s=sum(root);
    printf("\nsum = %d",s);
    printf("\nTotal nodes  = %d",c);
    avg=(float)s/c;
    printf("\nAvg %.2f",avg);
    m=max(root,root->data);
    printf("\nmaximum element is %d",m);
    m=min(root,root->data);
    printf("\nminimum element is %d",m);
    //vt(root);
    topview(root);
    bottamview(root);
    return 1;
}
