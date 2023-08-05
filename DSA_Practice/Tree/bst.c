#include <stdio.h>
#include <stdlib.h>
#define maximum(a, b) a > b ? a : b
struct node
{
    int data;
    struct node *left, *right;
};

struct node *createnode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
struct node *createBst(struct node *root, int data)
{
    if (root == NULL)
    {
        return createnode(data);
    }
    else if (root->data < data)
    {
        root->right = createBst(root->right, data);
    }
    else
    {
        root->left = createBst(root->left, data);
    }
    return root;
}
void preOrder(struct node *root)
{
    if (root == NULL)
        return;
    printf(" %d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    printf(" %d ", root->data);
    inOrder(root->right);
}
void postOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf(" %d ", root->data);
}

int hot(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return maximum(hot(root->left), hot(root->right)) + 1;
}
int dot(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int cdia = hot(root->left) + hot(root->right) + 1;
    return maximum(maximum(cdia,dot(root->left)),dot(root->right));
}

int main()
{
    struct node *root = NULL;
    int a[] = {40, 25, 35, 21, 54, 123, 1, 15, 51, 45, 7, 54, 35, 78};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        root = createBst(root, a[i]);
    }
    printf("PreOrder of tree   ");
    preOrder(root);
    printf("\nInorder of tree   ");
    inOrder(root);
    printf("\nPostOrder of tree ");
    postOrder(root);
    printf("\nDot %d and Hot %d",dot(root),hot(root));
    return 0;
}