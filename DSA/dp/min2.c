#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define min(a, b) a < b ? a : b
int marr[1000][1000];
int count = 0;
int mincount(int *coin, int size, int sum)
{
    count++;
    if (marr[size][sum] != -1)
        return marr[sum][size];
    if (size < 0 || sum <= 0)
        return INT_MAX;
    if (marr[size][sum] == -1)
    {
        // include the coin
        if (sum % coin[size] == 0)
            marr[size][sum] = sum / coin[size];
        else
            marr[size][sum] = INT_MAX;
    }
    else if (coin[size]>sum)
    {
        // exclude the coin
        marr[size][sum]=marr[size-1][sum];
    }
        //marr[size][sum] = min(marr[size - 1][sum], marr[size][sum - coin[size]] + 1);
        marr[size][sum]=min(mincount(coin, size - 1, sum),mincount(coin, size, sum-1));
    
    //int s =mincount(coin, size - 1, sum),n= mincount(coin, size, sum-1);
    //marr[size][sum] = s;
     //printf(" %d %d",s,n);
    return marr[size][sum];
}
int main()
{
    int coin[] = {5, 1}, sum = 5;
    int i, j, size = sizeof(coin) / sizeof(coin[0]);
    for (i = 0; i < size + 1; i++)
    {
        for (j = 0; j < sum + 1; j++)
            marr[i][j] = -1;
    }
    int a = mincount(coin, size-1, sum);
     printf("\n");
    for (i = 0; i < size + 1; i++)
    {
        for (j = 0; j < sum + 1; j++)
            printf(" %d ",marr[i][j]);
        printf("\n");
    }
    printf(" \n%d \n %d", a, count);
    return 0;
}