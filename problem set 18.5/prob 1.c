/*You are given an integer n or –n .If you are given n , print n to –n , if you are given –n, print –n to n.
*/
#include<stdio.h>

int main () 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n>0)
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
    return 0;
}