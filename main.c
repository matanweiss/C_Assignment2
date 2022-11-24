#include <stdio.h>
#include "my_mat.h"

int main()
{
    int dp[SIZE][SIZE][SIZE];
    int matrix[SIZE][SIZE];
    char choise = 'E';
    int i, j;
    while (choise != 'D')
    {
        scanf(" %c", &choise);
        switch (choise)
        {
        case 'A':
            A(matrix, dp);
            break;
        case 'B':
            scanf(" %d %d", &i, &j);
            B(matrix, i, j, dp);
            break;
        case 'C':
            scanf(" %d %d", &i, &j);
            C(matrix, i, j, dp);
            break;
        case 'P':
            P(matrix);
            break;
        case 'Q':
            Q(dp);
            break;
        }
    }
    return 0;
}