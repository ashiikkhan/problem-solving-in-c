#include<stdio.h>
#define N 8
    int chessboard[N+1][N+1];
void init_chessboard() {
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            chessboard[i][j]=0;
        }
    }
}

void place_rooks(int rooks) {
    int x, y;
    for(int i=1; i<=rooks; i++) {
        scanf("%d %d", &x, &y);
        chessboard[x][y]=1;
    }
}

void vanish_row_rooks() {
    for(int i=1; i<=N; i++) {
        int row_rooks=0;
        for(int j=1; j<=N; j++) {
            if(chessboard[i][j]==1) {
                row_rooks++;
            }
        }
        int vanish_count=0;
        for(int j=1; j<=N; j++) {
            if(row_rooks%2!=0) {
                if(vanish_count==row_rooks-1)
                    continue;
                if(chessboard[i][j]==1) {
                    chessboard[i][j]=0;
                    vanish_count++;
                }
            } else {
                chessboard[i][j]=0;
            }
        }
    }
}

void vanish_col_rooks() {
    for(int i=1; i<=N; i++) {   
        int col_rooks=0;
        for(int j=1; j<=N; j++) {
            if(chessboard[j][i]==1) {
                col_rooks++;
            }
        }
        int vanish_count=0;
        for(int j=1; j<=N; j++) {
            if(col_rooks%2!=0) {
                if(vanish_count==col_rooks-1)
                    continue;
                if(chessboard[j][i]==1) {
                    chessboard[j][i]=0;
                    vanish_count++;
                }
            } else {
                chessboard[j][i]=0;
            }
        }
    }
}

int count_safe_rooks() {
    int safe_rooks=0;
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            if(chessboard[i][j]==1){
                safe_rooks++;
            }
        }
    }
    return safe_rooks;
}

void print_safe_rooks() {
    printf("safe rooks: %d \n", count_safe_rooks());
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            if(chessboard[i][j]==1)
            {
                printf("%d %d\n", i, j);
            }
        }
    }
}

int main () 
{
    init_chessboard();
    int rooks; 
    scanf("%d", &rooks);
    place_rooks(rooks);
    vanish_row_rooks();
    vanish_col_rooks();
    print_safe_rooks();
    return 0;
}