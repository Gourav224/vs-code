nt hot(struct node *root)
{
    if (root == 0)
    {
        return 0;
    }
    printf( "%d ", root ->data);
    return  maximum(hot(root->left),hot(root->right)) +1 ;
}