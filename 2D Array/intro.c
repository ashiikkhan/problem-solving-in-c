#include<stdio.h>
int main ()
{
    int row=4, col=3;
    int matrix[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d,%d > %d      ", i, j, matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
