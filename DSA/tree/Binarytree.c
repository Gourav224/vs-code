#include <stdio.h>
#include <stdlib.h>
#define maximum(a, b) a > b ? a : b
struct node
{
    int data;
    struct node *left, *right;
};
int i = 0, f = 0, s = 0, c = 0;
struct node *create()
{
    // int arr[]={6,5,3,2,-1,-1,6,-1,-1,-1,10,15,-1,-1,75,-1,-1};
    int arr[] = {2, 5, 6, -1, -1, 4, -1, -1, 3, -1, -1, 8, -1, -1};
    // int arr[]={5,4,2,3,-1,-1,1,-1,-1,-1,9,6,-1,-1,7,-1,-1};
    int d = arr[i++];
    if (d == -1)
    {
        return 0;
    }
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = d;
    newnode->left = create();
    newnode->right = create();
    c++;
    return newnode;
}
void preorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    printf(" %d", root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    inorder(root->left);
    printf(" %d", root->data);
    inorder(root->right);
}
void postorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf(" %d", root->data);
}
int sum(struct node *r)
{
    if (r == 0)
    {
        return 0;
    }
    /*sum(r->left);
    sum(r->right);
    s+=r->data;*/
    return (sum(r->left) + sum(r->right)) + r->data;
}
int search(struct node *r, int data)
{
    if (r == 0)
        return -1;
    if (r->data == data)
    {
        printf("Element found");
        return 1;
    }
    else if (f == 0)
    {
        f = search(r->left, data);
        if (f == 0)
        {
            f = search(r->right, data);
            if (f)
            {
                return 1;
            }
            return 0;
        }
        return 1;
    }
}
int max(struct node *r, int m)
{
    if (r)
    {
        if (m < r->data)
        {
            m = r->data;
        }
        m = max(r->left, m);
        m = max(r->right, m);
        return m;
    }
    return m;
}
int min(struct node *r, int m)
{
    if (r)
    {
        if (m > r->data)
        {
            m = r->data;
        }
        m = min(r->left, m);
        m = min(r->right, m);
        return m;
    }
    return m;
}
int hot(struct node *r)
{
    if (!r)
        return 0;
    return (maximum(hot(r->left), hot(r->right))) + 1;
}
int dot(struct node *root)
{
    if (!root)
        return 0;
    int lh = hot(root->left);
    int rh = hot(root->right);
    int cdia = lh + rh + 1;
    return (maximum(maximum(cdia, dot(root->left)), dot(root->right)));
}
int main()
{
    int d, f, m;
    float avg;
    struct node *root;
    root = create();
    printf("Data of root %d", root->data);
    printf("\nPostorder is ");
    postorder(root);
    printf("\ninorder  ");
    inorder(root);
    printf("\npreorder is ");
    preorder(root);
    s = sum(root);
    printf("\nsum = %d", s);
    printf("\ntotal nodes is %d", c);
    avg = (float)s / c;
    printf("\nAverage of nodes = %.2f", avg);
    /*printf("\nenter data for search ");
    scanf("%d",&d);
    f=search(root,d);
    if (!f)
    {
      printf("Not found");
    }*/
    m = max(root, root->data);
    printf("\nmaximum element is %d ", m);
    m = min(root, root->data);
    printf("\nminimum element is %d ", m);
    printf("\nHeight of tree %d", hot(root));
    printf("\ndiameter of tree %d", dot(root));
    return 1;
}