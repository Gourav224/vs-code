#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data,h,l;
    struct node *left,*right;
};
struct node *createnode(int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
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
    else if (temp->data>data)
    {
        temp->left=createbst(temp->left,data);
    }   
    return temp;
}
void inorder(struct node *r)
{
    if (!r)
    {
        return;
    }
    inorder(r->left);
    printf(" %d",r->data);
    inorder(r->right);
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
int map[100];
//int vt[100][100];

// void vt(struct node *root,int d)
// {
//     if(!root)
//         return;

//     vt(root->left,root->h);
//     vt(root->right,root->h);
// }
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
int maparray[100][100];
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
}
//              10                                                              20
//            /                                                               /    \   
//           5                                                               9     25
//          /   \                                                          /   \   /  \  
//         4     6                                                        8    14 23    28      
//        /        \                                                          /        /  
//       3           7                                                      13      26         
//                    \                                                     /          \ 
//                       8                                                10            27
int main()
{
    struct node *root =0;
   // int a[]={10,5,4,3,6,7,8};
     int a[]={20,25,23,28,26,27,9,14,15,21,13,10,8};
  // int a[]={8,5,2,7,12,10,11,6,15,20,19,18};

    int n=sizeof(a)/sizeof(a[0]),i,ch;
    while (1)
    {
        printf("\nSelect one option\n1 Create bst\n2 data of root\n3 Inorder\n4 Vertical traverse\n5 top view\n6 bottam view\n0 exit\n");
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
        printf("\nINorder\n");
        inorder(root);
        break;
        case 4:
        vt(root);
        break;
        case 5:
        topview(root);
        printf("\ntop view of tree\n");
        for ( i = 0; i < lsize*2; i++)
        {
            if (map[i]!=-1)            
            printf(" %d",map[i]);
        }
        break;
        case 6:
        bottamview(root);
        printf("\nbottam view of tree\n");
        for ( i = 0; i < lsize*2; i++)
        {
            if (map[i]!=-1)            
            printf(" %d",map[i]);
        }
        break;
        case 0:
        return 0;
        default:
        
            break;
        }
    }    
}
