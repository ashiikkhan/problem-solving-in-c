#include<stdio.h>
int main ()
{
    int n=5;
    int matrix[n][n], x,y;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }

    int ans=0;

    if(x>3)
        ans += (x-3);
    else
        ans += (3-x);
    if(y>3)
        ans += (y-3);
    else
        ans += (3-y);


    printf("%d\n", ans);


    return 0;
}
