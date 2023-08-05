// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node *left, *right;
// };

// struct Node* newNode(int data) {
//     struct Node* node = (struct Node*)malloc(sizeof(struct Node));
//     node->data = data;
//     node->left = node->right = NULL;
//     return node;
// }

// void verticalOrder(struct Node* root, int hd, int* min, int* max, int hd_val[]) {
//     if (root == NULL) return;

//     hd_val[hd + (*max)] = root->data;

//     if (hd < *min) *min = hd;
//     else if (hd > *max) *max = hd;

//     verticalOrder(root->left, hd - 1, min, max, hd_val);
//     verticalOrder(root->right, hd + 1, min, max, hd_val);
// }

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data, height;
    struct node *left, *right;
};
#define maximum(a, b) a < b ? b : a
int hot(struct node *root)
{
    if (!root)
        return 0;
    return maximum(hot(root->right), hot(root->left)) + 1;
}
// rotation of tree
struct node *leftrotate(struct node *root)
{
    struct node *x = root->right;
    struct node *y = x->left;
    x->left = root;
    root->right = y;
    return x;
}
struct node *rightrotate(struct node *root)
{
    struct node *x = root->left;
    struct node *y = x->right;
    x->right = root;
    root->left = y;
    return x;
}
// create node
struct node *createnode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->right = node->left = 0;
    return node;
}
// balace checking
int getbalance(struct node *root)
{
    return hot(root->left) - hot(root->right);
}
// struct tree
struct node *createbst(struct node *root, int data)
{
    if (root == 0)
    {
        return createnode(data);
    }
    else if (data > root->data)
    {
        root->right = createbst(root->right, data);
    }
    else if (root->data > data)
    {
        root->left = createbst(root->left, data);
    }
    else
    {
        return root;
    }
    root->height = hot(root);
    int balance = getbalance(root);
    if (balance > 1 && data < root->left->data) // LL
    {
        return rightrotate(root);
    }
    else if (balance < -1 && data > root->right->data) // RL
    {
        return leftrotate(root);
    }
    else if (balance > 1 && data > root->left->data) // LR
    {
        root->left = leftrotate(root->left);
        return rightrotate(root);
    }
    else if (balance < -1 && data < root->right->data) // Rl
    {
        root->right = rightrotate(root->right);
        return leftrotate(root);
    }
    else
    {
        return root;
    }
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
int sum(struct node *root)
{
    if (root == 0)
    {
        return 0;
    }
    return sum(root->right) + sum(root->left) + root->data;
}
int dot(struct node *root)
{
    if (root == 0)
    {
        return 0;
    }
    int cdia = hot(root->left) + hot(root->right) + 1;
    return maximum(maximum(cdia, dot(root->right)), dot(root->left));
}
struct node *q[100];
int f = -1, r = -1;
void enqueue(struct node *root)
{
    if (r == -1)
    {
        f = r = 0;
        q[f] = root;
    }
    else
    {
        q[++r] = root;
    }
}
void dequeue()
{
    if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f++;
    }
}
void levelview(struct node *root)
{
    enqueue(0);
    enqueue(root);
    while (f != -1)
    {
        root = q[f];
        dequeue();
        if (root == 0)
        {
            if (f == -1)
            {
                return;
            }
            printf("\n");
            enqueue(0);
            continue;
        }
        printf(" %d ", root->data);
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
void leftview(struct node *root)
{
    enqueue(0);
    enqueue(root);
    while (f != -1)
    {
        root = q[f];
        dequeue();
        if (root == 0)
        {
            if (f == -1)
            {
                return;
            }
            root = q[f];
            dequeue();
            printf("\n%d", root->data);
            enqueue(0);
        }
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
void rightview(struct node *root)
{
    enqueue(0);
    enqueue(root);
    while (f != -1)
    {
        root = q[f];
        dequeue();
        if (root == 0)
        {
            if (f == -1)
            {
                return;
            }
            root = q[f];
            dequeue();
            printf("\n%d", root->data);
            enqueue(0);
        }
        if (root->right)
        {
            enqueue(root->right);
        }
        if (root->left)
        {
            enqueue(root->left);
        }
    }
}
int maparray[100];
void topview(struct node *root)
{
    int size = hot(root);
    for (int i = 0; i < 2 * size; i++)
    {
        maparray[i] = -1;
    }
    root->height = size;
    enqueue(root);
    while (f != -1)
    {
        root = q[f];
        dequeue();
        if (maparray[root->height] == -1)
        {
            maparray[root->height] = root->data;
        }
        if (root->left)
        {
            root->left->height = root->height - 1;
            enqueue(root->left);
        }
        if (root->right)
        {
            root->right->height = root->height + 1;
            enqueue(root->right);
        }
    }
    for (int i = 0; i < 2 * size; i++)
    {
        if (maparray[i] != -1)
        {
            printf(" %d", maparray[i]);
        }
    }
}
void bottamview(struct node *root)
{
    int count = hot(root);
    for (int i = 0; i < 2 * count; i++)
    {
        maparray[i] = -1;
    }
    enqueue(root);
    root->height = count;
    while (f != -1)
    {
        root = q[f];
        dequeue();
        maparray[root->height] = root->data;
        if (root->left)
        {
            root->left->height = root->height - 1;
            enqueue(root->left);
        }
        if (root->right)
        {
            root->right->height = root->height + 1;
            enqueue(root->right);
        }
    }
    for (int i = 0; i < 2 * count; i++)
    {
        if (maparray[i] != -1)
        {
            printf(" %d", maparray[i]);
        }
    }
}

// void verticalOrder(struct node *root, int hd, int *min, int *max, int hd_val[])
// {
//     if (root == 0)
//         return;

//     hd_val[hd + (*max)] = root->data;

//     if (hd < *min)
//         *min = hd;
//     else if (hd > *max)
//         *max = hd;

//     verticalOrder(root->left, hd - 1, min, max, hd_val);
//     verticalOrder(root->right, hd + 1, min, max, hd_val);
// }

// deletion of node
int n = 0;
struct node *leftmostinright(struct node *root)
{
    while (root->left != 0)
    {
        root = root->left;
    }
    return root;
}
struct node *deletenode(struct node *root, int key)
{
    if (root == 0)
    {
        return 0;
    }
    if (root->data < key)
    {
        root->right = deletenode(root->right, key);
    }
    else if (root->data > key)
    {
        root->left = deletenode(root->left, key);
    }
    else if (root->data = key)
    {
        n = 1;
        struct node *temp;
        if (root->right == 0)
        {
            temp = root->left;
            free(root);
            return temp;
        }
        if (root->left == 0)
        {
            temp = root->right;
            free(root);
            return temp;
        }
        temp = leftmostinright(root->right);
        root->data = temp->data;
        root->right = deletenode(root->right, temp->data);
    }
    else
        return root;

    root->height = hot(root);
    int balance = getbalance(root);
    if (balance > 1 && root->data < root->left->data) // LL
    {
        return rightrotate(root);
    }
    else if (balance < -1 && root->data > root->right->data) // RL
    {
        return leftrotate(root);
    }
    else if (balance > 1 && root->data > root->left->data) // LR
    {
        root->left = leftrotate(root->left);
        return rightrotate(root);
    }
    else if (balance < -1 && root->data < root->right->data) // Rl
    {
        root->right = rightrotate(root->right);
        return leftrotate(root);
    }
    else
    {
        return root;
    }
}
int main()
{
    struct node *root = 0;
    int a[] = {1, 2, 3, 4, 6, 78, 9, 10};
    int count = sizeof(a) / sizeof(a[0]), ch;
    while (1)
    {
        printf("\nselect one option\n1 create bst\t2 data of root\n3 Inorder\t4 preorder\n5 postorder\t6 height\n7 diameter\t8 sum\n9 levelview\t10 left view\n11 rightview\t12 topview\n13 bottam view\t14 Deletion \n 0 exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            for (int i = 0; i < count; i++)
            {
                root = createbst(root, a[i]);
            }
            break;
        case 2:
            printf("\nData of root %d", root->data);
            break;
        case 3:
            printf("\nInorder of tree\n");
            inorder(root);
            break;
        case 4:
            printf("\nPreorder of tree\n");
            preorder(root);
            break;
        case 5:
            printf("\nPost order of tree \n");
            postorder(root);
            break;
        case 6:
            printf("\nHeight of tree is %d ", hot(root));
            break;
        case 7:
            printf("\nDiameter of tree is %d ", dot(root));
            break;
        case 8:
            printf("\nsum of all nodes is %d \n", sum(root));
            break;
        case 9:
            printf("\nlevel view of tree \n");
            levelview(root);
            break;
        case 10:
            printf("\nLeft view of tree\n");
            leftview(root);
            break;
        case 11:
            printf("\nright view of tree\n");
            rightview(root);
            break;
        case 12:
            printf("\nTop view of tree\n");
            topview(root);
            break;
        case 13:
            printf("\nBottam view of tree\n");
            bottamview(root);
            break;
        case 14:
            printf("\nEnter data for deletion : ");
            scanf("%d", &ch);
            root = deletenode(root, ch);
            if (n == 0)
            {
                printf("\nNode not found\n");
            }
            else
            {
                printf("\nDeletion sucessful\n");
            }
            break;
        case 15:
            // int min = 0, max = 0;
            // int hd_val[15];
            // verticalOrder(root, 0, &min, &max, hd_val);

            // for (int i = min; i <= max; i++)
            // {
            //     printf("%d ", hd_val[i + max]);
            // }
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("\n****Wrong Choice****\n");
            break;
        }
    }
}
