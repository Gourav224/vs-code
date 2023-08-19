#include<stdio.h>
#include<stdlib.h>
struct Edge
{
    int data;
    int weight;
    struct Edge *next;
};
struct Graph{
    int numvertices;
    struct Edge* adj[100];
};
struct Edge *createEdge(int node,int weight){
    struct Edge *newNode=(struct Edge *)malloc(sizeof(struct Edge));
    newNode->data=node;
    newNode->weight=weight;
    newNode->next=NULL;
    return newNode;
}


int main(){
    struct Graph *graph;
    return 0;
}