#include<stdio.h>
void print_pattern(int);
int main () 
{
    int n;
    scanf("%d", &n);
    print_pattern(n);
    return 0;
}

void print_pattern(int n)
{   
    char ch='*';
    char space=' ';
    
    for(int i=n; i>=1; i--)
    {
        for(int s=1; s<=n-i; s++)
        {
            printf("%c", space);
        }
        for(int j=1; j<=i*2-1; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}