#include<stdio.h>
int main () 
{
    int row=10, col=10; 
    int square_matrix[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}