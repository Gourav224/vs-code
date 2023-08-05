#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

struct Edge {
  int dest;
  struct Edge *next;
};

struct Graph {
  int numVertices;
  struct Edge *adjLists[MAX_VERTICES];
};

struct Graph *createGraph(int vertices) {
  struct Graph *graph = (struct Graph *) malloc(sizeof(struct Graph));
  graph->numVertices = vertices;

  int i;
  for (i = 0; i < vertices; i++) {
    graph->adjLists[i] = NULL;
  }

  return graph;
}

void addEdge(struct Graph *graph, int src, int dest) {
  struct Edge *newEdge = (struct Edge *) malloc(sizeof(struct Edge));
  newEdge->dest = dest;
  newEdge->next = graph->adjLists[src];
  graph->adjLists[src] = newEdge;
}

void printGraph(struct Graph *graph) {
  int i;
  for (i = 0; i < graph->numVertices; i++) {
    struct Edge *temp = graph->adjLists[i];
    printf("Vertex %d: ", i);
    while (temp) {
      printf("%d -> ", temp->dest);
      temp = temp->next;
    }
    printf("NULL\n");
  }
}

int main() {
  int vertices = 5;
  struct Graph *graph = createGraph(vertices);
  addEdge(graph, 0, 1);
  addEdge(graph, 0, 4);
  addEdge(graph, 1, 2);
  addEdge(graph, 1, 3);
  addEdge(graph, 1, 4);
  addEdge(graph, 2, 3);
  addEdge(graph, 3, 4);
  printGraph(graph);
  return 0;
}
