#include <stdio.h>
#include <stdlib.h>

struct Pair
{
    int data;
    int weight;
};
struct Edge
{
    struct Pair *val;
    struct Edge *next;
};

struct Graph
{
    int numvertices;
    struct Edge **adj;
};

struct Edge *createEdge(int node, int weight)
{
    struct Edge *newNode = (struct Edge *)malloc(sizeof(struct Edge));
    newNode->val= (struct Pair *)malloc(sizeof(struct Pair));
    newNode->val->data = node;
    newNode->val->weight = weight;
    newNode->next = NULL;
    return newNode;
}

struct Graph *createGraph(int n,int *arr)
{
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->numvertices = n;
    for (int i = 0; i < n; i++)
    {
        struct Edge *t=createEdge(arr[i],0);
        struct Edge **newNode = (struct Edge **)malloc(sizeof(struct Edge));
        graph->adj = newNode;
        
    }
    return graph;
}

void addEdge(struct Graph *graph, int u, int v, int wt)
{
    struct Edge *t = createEdge(v, wt);
    t->next = graph->adj[u];
    graph->adj[u] = t;
    t = createEdge(u, wt);
    t->next = graph->adj[v];
    graph->adj[v] = t;
}
void printGraph(struct Graph *graph)
{
    int n = graph->numvertices;
    for (int i = 1; i <= n; i++)
    {
        struct Edge *temp = graph->adj[i];
        printf("Vertex %d: ", i);
        while (temp != NULL)
        {
            printf("->[ node %d, weight %d]", temp->val->data, temp->val->weight);
            temp = temp->next;
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter number of vertex :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter value of %d nodes : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    struct Graph *graph = createGraph(n,arr);
    int m;
    printf("Enter the number of edges : ");
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        printf("Enter src ,dest,weight :");
        scanf("%d%d%d", &u, &v, &wt);
        addEdge(graph, u, v, wt);
    }
    printGraph(graph);

    return 0;
}