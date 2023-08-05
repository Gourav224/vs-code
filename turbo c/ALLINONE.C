#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
struct node{
    int data;
    struct node *left, *right;
};
struct node *newnode;
struct node *insert(struct node *root, int data){
    if(root==0){
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=0;
	newnode->right=0;
	return newnode;
    }
    else if(root->data > data){
	root->left=insert(root->left,data);
    }
    else{
	root->right=insert(root->right,data);
    }
    return root;
}
void main(){
    struct node *root;
    int i,tree[]={7,3,5,2,1,6,4,10,8,9,13,12,14};
    for(i=0;i<13;i++)
	root=insert(root,tree[i]);
    printf("\nRoot of Tree: %d\n",root->data);
    getch();
}