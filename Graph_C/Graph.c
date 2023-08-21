#include <stdio.h>
#include <stdlib.h>

struct Edge {
    int data;
    int weight;
    struct Edge *next;
};

struct Graph {
    int numvertices;
    struct Edge *adj[100];
};

struct Edge *createEdge(int node, int weight) {
    struct Edge *newNode = (struct Edge *)malloc(sizeof(struct Edge));
    newNode->data = node;
    newNode->weight = weight;
    newNode->next = NULL;
    return newNode;
}

struct Graph *createGraph(int n) {
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->numvertices = n;
    for (int i = 0; i <= n; i++) {
        graph->adj[i] = NULL;
    }
    return graph;
}

void addEdge(struct Graph *graph, int u, int v, int wt) {
    struct Edge *t = createEdge(v, wt);
    t->next = graph->adj[u];
    graph->adj[u] = t;
    t = createEdge(u, wt);
    t->next = graph->adj[v];
    graph->adj[v] = t;
    
}
void printGraph(struct Graph *graph){
    int n=graph->numvertices;
    for(int i=1;i<=n;i++){
        struct Edge *temp=graph->adj[i];
        printf("Vertex %d: ", i);     
        while (temp!=NULL)
        {
            printf("->[ node %d, weight %d]",temp->data,temp->weight);
            temp=temp->next;   
        }
        printf("\n");
    }
}
int main() {
    int n ;
    printf("Enter number of vertex :");
    scanf("%d",&n);
    struct Graph *graph = createGraph(n);
    int m;
    printf("Enter the number of edges : ");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int u,v,wt;
        printf("Enter src ,dest,weight :");
        scanf("%d%d%d",&u,&v,&wt);
        addEdge(graph, u, v, wt);
    }
    printGraph(graph);
    
    return 0;
}
