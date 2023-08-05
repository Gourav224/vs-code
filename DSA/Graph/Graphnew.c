#include<stdio.h>
#include<stdlib.h>
int N,M=0;
void createadjmatrix(int adj[][N+1],int arr[][2])
{
    int i,j;
    for ( i = 0; i < N+1; i++)
    {
        for (j = 0; j < N+1; j++)
        {
            adj[i][j]=0;
        }
    }
    for ( i = 0; i < M; i++)
    {
        int x=arr[i][0];
        int y=arr[i][1];
        adj[x][y]=1;
        adj[y][x]=1;
    }    
}
void printadjmatrix(int adj[][N+1])
{
    int i,j;
    printf("\nAdjcency matrix\n");
    for ( i = 1; i < N+1; i++)
    {
        for (j = 1; j < N+1; j++)
        {
            printf("%d ",adj[i][j]);
        }
        printf("\n");
    }   
}
int main()
{
    printf("Enter the number of nodes in graph : ");
    scanf("%d",&N);
    int arr[N][2],i,j;
    for ( i = 0; i <N ; i++)
    {
        int n;
        printf("\nEnter number of connections for %dst node :   ",i+1);
        scanf("%d",&n);
        M+=n;
        for ( j = 0; j < n; j++)
        {
            printf("\nEnter connections from %dst node :  ",i+1);
            arr[i][0]=i+1;
            scanf("%d",&arr[i][1]);
        }
    }
    int adj[N+1][N+1];
    createadjmatrix(adj,arr);
    printadjmatrix(adj);
    return 0;
}