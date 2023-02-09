#include<stdio.h>
int print_divisors(int);
int main ()
{
    int n;
    scanf("%d", &n);
    print_divisors(n);
    return 0;
}
int print_divisors(int x)
{
    for(int i=1; i<=x; i++)
    {
        if(x%i==0)
        {
            printf("%d ", i);
        }
    }
}