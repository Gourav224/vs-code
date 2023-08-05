#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void red_graph(struct node *a[], int node)
{
    struct node *newnode, *last;
    int i, j, n;

    for (i = 1; i < node + 1; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = i;
        newnode->next = 0;
        if (a[i] == 0)
        {
            last = a[i] = newnode;
        }
        printf("\nEnter the no. of node connected to %d ", i);
        scanf("%d", &n);
        for (j = 0; j < n; j++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            scanf("%d", &newnode->data);
            newnode->next = 0;

            last->next = newnode;
            last = newnode;
        }
    }
}
void print_graph(struct node *a[], int node)
{
    struct node *temp;
    for (int i = 1; i < node + 1; i++)
    {
        temp = a[i];
        printf("\nThe connected node to ");
        while (temp != 0)
        {
            printf("%d->", temp->data);
            temp = temp->next;
        }
    }
}
int Q[50];
int f = -1, r = -1;
void enqueue(int data)
{
    if (f == -1)
    {
        f = r = 0;
        Q[0] = data;
    }
    else
    {
        Q[++r] = data;
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
void bfs(struct node *a[], int node)
{
    int varr[node + 1], i, s, rarr[node], k = 0;
    for (i = 0; i < node + 1; i++)
    {
        varr[i] = -1;
    }
    printf("\nEnter the source node : \n");
    scanf("%d", &s);
    enqueue(s);
    while (f != -1)
    {
        struct node *t;
        int p = Q[f];
        dequeue();
        if (varr[p] == -1)
        {
            rarr[k++] = p;
            varr[p] = 1;
        }
        t = a[p]->next;
        while (t != 0)
        {
            if (varr[t->data] == -1)
            {
                int f = 1;
                for (i = f; i <= r; i++)
                {
                    if (t->data == Q[i])
                    {
                        f = 0;
                    }
                }
                if (f)
                {
                    enqueue(t->data);
                }
            }
            t = t->next;
        }
    }
    printf("\nBFS Traverse of Graph");
    for (i = 0; i < k; i++)
    {
        printf(" %d ", rarr[i]);
    }
}
int stk[20];
int top = -1;
void push(int data)
{
    stk[++top] = data;
}
void pop()
{
    top--;
}
void dfs(struct node *a[], int node)
{
    int varr[node + 1], i, s, rarr[node], k = 0;
    for (i = 0; i < node + 2; i++)
    {
        varr[i] = -1;
    }
    printf("\nEnter the source node for dfs : ");
    scanf("%d", &s);
    push(s);
    rarr[k++] = s;
    varr[s] = 1;
    while (top != -1)
    {
        struct node *t = a[stk[top]]->next;
        int f = 1;
        while (t != 0)
        {
            if (varr[t->data] == -1)
            {
                push(t->data);
                rarr[k++] = t->data;
                varr[t->data] = 1;
                f = 0;
                break;
            }
            t = t->next;
        }
        if (f)
        {
            pop();
        }
    }
    printf("\nDFS Traverse of Graph");
    for (i = 0; i < k; i++)
    {
        printf(" %d ", rarr[i]);
    }
}
void loop(struct node *a[],int node)
{
    int i=1;
    while (i<=node)
    {
        struct node *t=a[i];
        int d=t->data,F=0;
        t=t->next;
        while (t!=0)
        {
            if (d==t->data)
            {
                printf("\nLoop node is %d ",d);
                F=1;
                break;
            }
            t=t->next;
        }
        if (F)
        {
            break;
        }      
        i++;  
    }
    if (i>node)
    {
        printf("\nNo loop in graph\n");
    }    
}
void cycle(struct node *a[], int node)
{
    int varr[node + 1], i, s = a[1]->data, rarr[20], k = 0;
    for (i = 0; i < node + 1; i++)
    {
        varr[i] = -1;
    }
    push(s);
    varr[s] = 1;
    rarr[k++] = s;
    while (top != -1)
    {
        struct node *t = a[stk[top]]->next;
        int f = 1;
        while (t != 0)
        {
            if (varr[t->data] == -1)
            {
                push(t->data);
                rarr[k++] = t->data;
                varr[t->data] = 1;
                f = 0;
                break;
            }
            if (varr[t->data]==1)
            {
                rarr[k++]=t->data;
                f=0;
                break;
            }
            t = t->next;
        }
        if (f)
        {
            pop();
        }
    }
    printf("\nCycle in Graph");
    for (i = 0; i < k; i++)
    {
        printf(" %d ", rarr[i]);
    }
}
void main()
{
    int node;
    printf("\nEnter no. of node in graph: ");
    scanf("%d", &node);
    struct node *q[node + 1];
    for (int i = 0; i < node + 1; i++)
    {
        q[i] = 0;
    }
    red_graph(q, node);
    print_graph(q, node);
    // bfs(q,node);
    // dfs(q, node);
    // loop(q, node);
    cycle(q,node);    
}
