// coin problem
#include<stdio.h>
#include<stdlib.h>
int rarr[1000][1000],count=0;
int counter(int *coin,int size,int sum)
{
    count++;
    if (rarr[size][sum]!=-1)
        return rarr[size][sum];
    if (sum==0)
        return 1;
    if (sum<0)
        return 0;
    if (size<=0)
        return 0;
    int csum=counter(coin,size-1,sum)+counter(coin,size,sum-coin[size-1]);
    rarr[size][sum]=csum;
    return rarr[size][sum];
    
}
int main()
{
    int coin[]={7,5,3,2},sum=55555;
    int size=sizeof(coin)/sizeof(coin[0]);
    int i,j;
    for ( i = 0; i <=size; i++)
    {
        for ( j = 0; j <= sum; j++)
        {
            rarr[i][j]=-1;
        }
    }
    int res=counter(coin,size,sum);
    printf("total no. of combination is %d",res);
    printf("\ncalling time %d",count);
}