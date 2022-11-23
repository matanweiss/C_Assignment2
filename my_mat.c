#include <stdio.h>
#include "my_mat.h"

void A(int matrix[SIZE][SIZE], int dp[SIZE][SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int k = 0; k < SIZE; k++)
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                if (i == k || j == k)
                {
                    dp[k][i][j] = matrix[i][j];
                }
                else
                {
                    dp[k][i][j] = min(dp[k - 1][i][j], dp[k][i][k] + dp[k][k][j]);
                }
            }
        }
    }
}

void B(int matrix[SIZE][SIZE], int i, int j, int dp[SIZE][SIZE][SIZE])
{
    if (dp[SIZE - 1][i][j])
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

void C(int matrix[SIZE][SIZE], int i, int j, int dp[SIZE][SIZE][SIZE])
{
    printf("%d\n", dp[SIZE - 1][i][j]);
}

void P(int matrix[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf(" %d", matrix[i][j]);
        }
    }
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}