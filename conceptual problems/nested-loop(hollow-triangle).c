#include<stdio.h>
int main () 
{
    int n, i, j; 
    scanf("%d", &n);\

//first row
    for(i=1; i<=1; i++)
    {
        printf("*\n");
    }
//middle hollow rows
    for(i=1; i<=n-2; i++)
    {
        printf("*");
        for(j=1; j<=i; j++)
        {
            printf("  ");
        }
        printf("*\n");
    }
//last row
    for(i=1; i<=n; i++)
    {
        printf("* ");
    }

    return 0; 
}