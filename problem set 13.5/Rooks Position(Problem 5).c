#include<stdio.h>

#define NUM_ROWS 3
#define NUM_COLS 3

int main () 
{
    int chess[NUM_ROWS][NUM_COLS];
    
    for(int i=1; i<=NUM_ROWS; i++)
    {
        for(int j=1; j<=NUM_COLS; j++)
        {
            chess[i][j]=0;      //initialize every elements to 0;
        }
    }


    //Input how many rooks you have on your chessboard ? 
    int r;
    printf("Enter rooks amount: ");
    scanf("%d", &r);

    //so take a loop for getting input for `r` rooks' position;
    printf("Enters position: ");

    int empty_cells=NUM_ROWS*NUM_COLS;
    while (r!=0)
    {
        int i, j;        
        scanf("%d %d", &i, &j);
        if(i>=1 && j<=3)
        {
            chess[i][j]=1;
            empty_cells--;
        }

        r--; // `r` decrement;
    }
    
    
    printf("Total empty cells: %d \n", empty_cells);
    for(int i=1; i<=NUM_ROWS; i++)
        {
            for(int j=1; j<=NUM_COLS; j++)
            {
                if(chess[i][j]==0)
                    printf("%d %d \n", i, j);
            }
        }    

    return 0;
}