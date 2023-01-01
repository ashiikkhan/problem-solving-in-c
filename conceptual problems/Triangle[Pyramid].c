#include<stdio.h>
int main () 
{
    int rows, i, space; 
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(space=1; space<=rows-i; space++)
        {
            printf("-");
        }
        int k=0; 
        while (k!=i*2-1)
        {
            printf("*");
            k++;
        }
        for(space=1; space<=rows-i; space++)
        {
            printf("-");
        }
        printf("\n");
    }
    return 0; 
}