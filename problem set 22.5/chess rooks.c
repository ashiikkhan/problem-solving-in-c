#include<stdio.h>
int main ()
{
    int n=8;
    int chessboard[n+1][n+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            chessboard[i][j]=0;
        }
    }

    int rooks, x, y;
    scanf("%d", &rooks);
    for(int i=1; i<=rooks; i++)
    {
        scanf("%d %d", &x, &y);
        chessboard[x][y]=1;
    }
    //vanishing row rooks first 
    for(int i=1; i<=n; i++)
    {
        int row_rooks=0;
        for(int j=1; j<=n; j++)
        {
            if(chessboard[i][j]==1)
            {
                row_rooks++;
            }
        }
        int vanish_count=0;
        for(int j=1; j<=n; j++)
        {
            if(row_rooks%2!=0)
            {
                if(vanish_count==row_rooks-1)
                    continue;
                if(chessboard[i][j]==1)
                {
                    chessboard[i][j]=0;
                    vanish_count++;
                }
            }
            else 
            {
                chessboard[i][j]=0;
            }
        }
    }

    //vanishing col rooks
    for(int i=1; i<=n; i++)
    {   
        int col_rooks=0;
        for(int j=1; j<=n; j++)
        {
            if(chessboard[j][i]==1)
            {
                col_rooks++;
            }
        }
        int vanish_count=0;
        for(int j=1; j<=n; j++)
        {
            if(col_rooks%2!=0)
            {
                if(vanish_count==col_rooks-1)
                    continue;
                if(chessboard[j][i]==1)
                {
                    chessboard[j][i]=0;
                    vanish_count++;
                }
            }
            else {
                chessboard[j][i]=0;
            }
        }
    }

    int safe_rooks=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(chessboard[i][j]==1){
                safe_rooks++;
            }
        }
    }
    printf("safe rooks: %d \n", safe_rooks);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(chessboard[i][j]==1){
                printf("%d %d", i, j);
            }
        }
        printf("\n");
    }
    
    return 0;
}