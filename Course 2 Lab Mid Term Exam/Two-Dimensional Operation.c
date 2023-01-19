#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int matrix[N + 1][M + 1];

    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
            scanf("%d", &matrix[i][j]);


    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            if (matrix[i][j] == i && matrix[i][j] == j)
                matrix[i][j] += 3;
            else if (matrix[i][j] == i)
                matrix[i][j] += 2;
            else if (matrix[i][j] == j)
                matrix[i][j] += 1;
        }
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}