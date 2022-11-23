#include <stdio.h>
#include "my_mat.h"

void A(int matrix[SIZE][SIZE])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf(" %d", &matrix[i][j]);
        }
    }
}

void B(int matrix[SIZE][SIZE], int i, int j)
{
    if (matrix[i][j])
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

void C(int matrix[SIZE][SIZE], int, int);

void P(int matrix[SIZE][SIZE])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", matrix[i][j]);
        }
    }
}