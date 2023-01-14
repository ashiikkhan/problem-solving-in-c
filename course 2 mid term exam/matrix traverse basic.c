#include <stdio.h>
int main()
{

    int n = 3;
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("printing row-wise: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("printing col-wise: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    printf("printing principal diagonal: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    printf("printing secondary diagonal: \n");
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if ((i + j) == (n - 1))
            {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}