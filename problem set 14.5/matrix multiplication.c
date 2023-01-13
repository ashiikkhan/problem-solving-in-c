#include<stdio.h>
int main ()
{
    int fst_mtx[10][10], snd_mtx[10][10], result_mtx[10][10],row1, col1, row2, col2, i, j, k, sum=0;
    scanf("%d %d", &row1, &col1);
    scanf("%d %d", &row2, &col2);
    //until the column number of matrix 1 and row number of matrix 2 is not same the while loop will continue;
    while(col1!=row2)
    {
        printf("give that input again for col1 and row2 matching: \n");
        scanf("%d %d", &row1, &col1);
        scanf("%d %d", &row2, &col2);
    }
    //first matrix input;
    for( i=0; i<row1; i++)
    {
        for( j=0; j<col1; j++)
        {
            scanf("%d", &fst_mtx[i][j]);
        }
    }
    //second matrix input;
    for( i=0; i<row2; i++)
    {
        for( j=0; j<col2; j++)
        {
            scanf("%d", &snd_mtx[i][j]);
        }
    }


    //multiplication;
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col2; j++)
        {
            for(k=0; k<col1; k++)
            {
                sum += fst_mtx[i][k] * snd_mtx[k][j];
            }
            result_mtx[i][j]=sum;
            sum=0;
        }
    }







    printf("first matrix: \n");
    for( i=0; i<row1; i++)
    {
        for( j=0; j<col1; j++)
        {
            printf("%d ", fst_mtx[i][j]);
        }
        printf("\n");
    }



    printf("second matrix: \n");
    for( i=0; i<row2; i++)
    {
        for( j=0; j<col2; j++)
        {
            printf("%d ", snd_mtx[i][j]);
        }
        printf("\n");
    }

    printf("multiplied matrix: \n");
    for( i=0; i<row1; i++)
    {
        for( j=0; j<col2; j++)
        {
            printf("%d ", result_mtx[i][j]);
        }
        printf("\n");
    }



    return 0;
}
