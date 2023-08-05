// code by cm sir
#include<stdio.h>
#include<stdlib.h>
int N,M;
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
    N=5;
    int arr[][2]={{1,2},{2,3},{4,5},{1,5}};
    M=sizeof(arr)/sizeof(arr[0]);
    int adj[N+1][N+1];
    createadjmatrix(adj,arr);
    printadjmatrix(adj);
    return 0;
}