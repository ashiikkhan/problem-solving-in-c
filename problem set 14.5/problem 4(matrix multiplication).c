#include<stdio.h>
int main () 
{
    int n, m; 
    scanf("%d %d", &n, &m);

    int first_matrix[n][m], second_matrix[n][m],multiplied_matrix[n][m], i, j, k;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &first_matrix[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &second_matrix[i][j]);
        }
    }

    //multiplication 
    int result=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            for(k=0; k<m; k++)
            {
                result+=first_matrix[i][k]*second_matrix[k][j];
            }
            multiplied_matrix[i][j]=result;
            result=0;
        }
    }






    printf("first  matrix: \n");
     for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", first_matrix[i][j]);
        }
        printf("\n");
    }
    printf("second  matrix: \n");
     for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", second_matrix[i][j]);
        }
        printf("\n");
    }
    printf("multiplied  matrix: \n");
     for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", multiplied_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}