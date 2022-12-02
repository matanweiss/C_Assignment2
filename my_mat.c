#include <stdio.h>
#include <math.h>
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
                if (matrix[i][k] == 0 || matrix[k][j] == 0)
                {
                    // do nothing
                }
                else if (matrix[i][j] == 0 && i != j)
                {
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                }
                else
                {
                    matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
                }
            }
        }
    }
}

void B(int matrix[SIZE][SIZE], int i, int j, int dp[SIZE][SIZE][SIZE])
{
    if (matrix[i][j])
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
    if (matrix[i][j] == 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", matrix[i][j]);
    }
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}
