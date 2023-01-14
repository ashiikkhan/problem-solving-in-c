#include <stdio.h>
#include <stdbool.h>
int main()
{

    int n=3;
    int matrix[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // calculate the sum of prime diagonal  and secondary diagonal;
    int prime_sum = 0, second_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                prime_sum += matrix[i][j];

            if ((i + j) == (n - 1))
                second_sum += matrix[i][j];
        }
    }
    int ans = true;
    if (prime_sum != second_sum)
        ans = false;

    for (int i = 0; i < n; i++)
    {
        int row_sum = 0, col_sum = 0;
        for (int j = 0; j < n; j++)
        {
            row_sum += matrix[i][j];
            col_sum += matrix[j][i];
        }

        if (row_sum != col_sum || row_sum != prime_sum)
            ans = false;


    }

    if (ans == true)
        printf("YES");
    else
        printf("NO");

    return 0;
}