#include<stdio.h>
int main ()
{
    int first[2][3]={{1, 2, 3}, {4, 5, 6}};
    int second[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row1=2, col1=3, row2=3, col2=3, sum=0;

    int result[row1][col2];
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col2; j++)
        {
            for(int k=0; k<row2; k++)
            {
                sum+=first[i][k]*second[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}