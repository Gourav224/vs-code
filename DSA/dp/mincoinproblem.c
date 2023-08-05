#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define min(a, b) a < b ? a : b
int main()
{
    int coin[] = {1, 3, 5, 9}, sum = 10;
    int i, j, size = sizeof(coin) / sizeof(coin[0]);
    int rarr[size][sum + 1];
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < sum + 1; j++)
        {
            if (j == 0)
                rarr[i][j] = 0;
            if (i == 0)
            {
                if (sum % coin[i] == 0)
                    rarr[i][j] = j / coin[i];
                else
                    rarr[i][j] = INT_MAX;
            }
            else if (coin[i] > j)
                rarr[i][j] = rarr[i - 1][j];
            else
                rarr[i][j] = min(rarr[i - 1][j], rarr[i][j - coin[i]] + 1);
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < sum + 1; j++)
            printf(" %d ", rarr[i][j]);
        printf("\n");
    }
    printf("Solution is  %d ",rarr[size-1][sum]);

    return 0;
}