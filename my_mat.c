#include <stdio.h>
#include "my_mat.h"

void A(int matrix[SIZE][SIZE], int dp[SIZE][SIZE][SIZE])
{
    int input;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d", &input);
            matrix[i][j] = input;
            dp[0][i][j] = input;
        }
    }
    for (int k = 0; k < SIZE; k++)
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                if (dp[k - 1][i][j] == 0)
                {
                    dp[k][i][j] = dp[k - 1][i][k] + dp[k - 1][k][j];
                }
                else if (dp[k - 1][i][k] == 0 || dp[k - 1][k][j] == 0)
                {
                    dp[k][i][j] = dp[k - 1][i][j];
                }
                else
                {
                    dp[k][i][j] = min(dp[k - 1][i][j], dp[k - 1][i][k] + dp[k - 1][k][j]);
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
        printf("\n");
    }
}

void Q(int dp[SIZE][SIZE][SIZE])
{
    for (int k = 0; k < SIZE; k++)
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                printf(" %d", dp[k][i][j]);
            }
            printf("\n");
        }
        printf("\n\n\n");
    }
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}
