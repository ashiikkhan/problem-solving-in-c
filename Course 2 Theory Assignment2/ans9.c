#include<stdio.h>
#define N 3
void transpose_matrix(int matrix[][N])
{
    for(int i=0; i<N; i++)
    {
        for(int j=i; j<N; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}
int main ()
{
    int matrix[N][N];
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    transpose_matrix(matrix);

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}