//what is factorial?
// Factorial is any positive integer multiplication rule that decreases by one and is
// multiplied successively until it reaches 1.
#include<stdio.h>
int factorial(int);
int main () 
{
    int a;
    scanf("%d", &a);
    int ans = factorial(a);
    printf("%d", ans);
    return 0;
}
int factorial (int x)
{
    int fact = 1;
    for(int i = x; i>=1; i--)
    {
        fact = fact * i;
    }
    return fact;
}