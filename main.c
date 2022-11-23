#include <stdio.h>
#include "my_mat.h"

int main()
{
    int matrix[SIZE][SIZE];
    char choise = 'E';
    int i, j;
    while (choise != 'D')
    {
        scanf(" %c", &choise);
        switch (choise)
        {
        case 'A':
            A(matrix);
            break;
        case 'B':
            scanf(" %d %d", &i, &j);
            B(matrix, i, j);
            break;
        case 'C':
            printf("C function ");
            break;
        case 'P':
            P(matrix);
            break;
        }
    }
    return 0;
}