#include<stdio.h>
int main () 
{
    int n, i, j; 
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i*2-1; j++)
        {
            if(i==n)
            {
                if (j%2!=0)
                    printf("#");
                else 
                    printf(" ");

                continue;
            }

            if( j==1 || j==i*2-1)
                printf("#");
            else 
                printf(" ");

            
        }
        printf("\n");
    }

    return 0; 
}