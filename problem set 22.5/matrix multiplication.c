//number of columns in first matrix == number of rows in second matrix
//reseult matrix will be = result [first matrix row]  [second matrix cols]
int main () 
{
    int first[11][11], second[11][11], result[11][11], row1, row2, col1, col2, i, j, k, sum=0;
    printf("Enter rows and cols for first matrix: \n");
    scanf("%d %d", &row1, &col1);
    printf("Enter rows and cols for second matrix: \n");
    scanf("%d %d", &row2, &col2);
    while (col1!=row2)
    {
        printf("Enter rows and cols for first matrix: \n");
        scanf("%d %d", &row1, &col1);
        printf("Enter rows and cols for second matrix: \n");
        scanf("%d %d", &row2, &col2);
    }
    //take input of first matrix;
    printf("take input of first matrix: \n");
    for(i=1; i<=row1; i++)
    {
        for(j=1; j<=col1; j++)
        {
            scanf("%d", &first[i][j]);
        }
    }
    //take input of second matrix;
    printf("take input of second matrix: \n");
    for(i=1; i<=row2; i++)
    {
        for(j=1; j<=col2; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }

    //result matrix: multiply first * second matrix: 
    for(i=1; i<=row1; i++)
    {
        for(j=1; j<=col2; j++)
        {
            for(k=1; k<=row2; k++)
            {
                sum+= (first[i][k]*second[k][j]);
            }
            result[i][j]=sum;
            sum=0;
        }
    }




    //print first matrix
    printf("first matrix: \n");
    for(i=1; i<=row1; i++)
    {
        for(j=1; j<=col1; j++)
        {
            printf("%d ", first[i][j]);
        }
        printf("\n");
    }
    //print second matrix
    printf("second matrix: \n");
    for(i=1; i<=row2; i++)
    {
        for(j=1; j<=col2; j++)
        {
            printf("%d ", second[i][j]);
        }
        printf("\n");
    }
    //result matrix: 
    
    //result matrix: 
    printf("final matrix: \n");
    for(i=1; i<=row1; i++)
    {
        for(j=1; j<=col2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }


    return 0;
}