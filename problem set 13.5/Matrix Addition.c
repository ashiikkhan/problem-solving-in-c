#include<stdio.h>
int main ()
{
    int N, M;
    printf("Enter rows and columns: ");
    scanf("%d %d", &N, &M);

    int a[N][M];
    int b[N][M];

    printf("Give input for matrix a: ");
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


    printf("Give input for matrix b: ");
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    int c[N][M];

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("Here is the matrix c: \n");
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }


    return 0;
}
