//combination = n!/r!*(n-r)!;
#include<stdio.h>
int combination(int, int);
int fact(int);
int main () 
{
    int n, r;
    printf("total number of items: ");
    scanf("%d", &n);
    printf("number of items being selected in each comb: ");
    scanf("%d", &r);
    
    int ans = combination(n, r);
    printf("%d", ans);
    return 0;
}

int combination(int x, int y)
{
    int ans = fact(x)/(fact(y)*fact(x-y));
    return ans;
}

int fact(int x)
{
    int factorial =1;
    for(int i=x; i>=1; i--)
    {
        factorial*=i;
    }
    return factorial;
}