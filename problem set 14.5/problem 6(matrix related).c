#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int matrix[n + 1][n + 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
     int col=1;
    for (int i = 1; i <= n; i++)
    {
        printf("row-%d and column-%d = ", i, col);
        for (int j = 1; j <= n; j++)
        {
            if (i != j) {
                printf("%d ", matrix[i][j]);
            }
        }
        for (int j = 1; j <= n; j++)
        {
            if (i != j) {
                printf("%d ", matrix[j][i]);
            }
        }
        printf("\n");
        col++;
    }

    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n; j++)
    //     {
    //         printf("%d ", matrix[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}