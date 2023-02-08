/**
 * .If you are given n , print n to –n , if you are given –n, print –n to n.
*/
#include<stdio.h>

void print_range(int); //function prototype

int main ()
{
    int n;
    scanf("%d", &n);
    print_range(n);
    return 0;
}


void print_range(int n)
{
    if(n>=0)
    {
        for(int i=n; i>=-n; i--)
        {
            printf("%d ", i);
        }
    }
    else 
    {
        for(int i=n; i<=-n; i++)
        {
            printf("%d ", i);
        }
    }
}