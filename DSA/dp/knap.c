#include<stdio.h>
#define max(a,b) a>b?a:b
int main()
{
    int w[]={4,5,6,7};
    int p[]={2,4,3,5};
    int i,j,s1=sizeof(w)/sizeof(w[0]),s2=sizeof(p)/sizeof(p[0]);
    int sum=9;
    int rarr[s1+1][sum+1];
    for ( i = 0; i < s1+1; i++)
    {
        for (j = 0; j < sum+1; j++)
        {
            if (i==0 || j==0)
            {
                rarr[i][j]=0;
            }
            else if(i==1)
            {
                if (w[i-1]<=j)
                {
                    rarr[i][j]=p[i-1];
                }    
                else
                {
                    rarr[i][j]=0;
                }
            }
            else
            {
                if (w[i-1]>j)
                {
                    rarr[i][j]=rarr[i-1][j];
                }
                else
                    rarr[i][j]=max(rarr[i-1][j],rarr[i-1][j-w[i-1]]+p[i-1]);
            }
        }
    }
    for ( i = 0; i < s1+1; i++)
    {
        for ( j = 0; j < sum+1; j++)
        {
            printf(" %d ",rarr[i][j]);
        }
        printf("\n");
    }
    
}