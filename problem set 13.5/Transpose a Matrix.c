#include<stdio.h>
int main () 
{
    int N, M; 
    scanf("%d %d", &N, &M);

    int matrix[N][M];

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    /*
        The transpose of a matrix is simply a flipped version of the original matrix. We can transpose a matrix by switching its rows with its columns.
    */

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }


    return 0;
}