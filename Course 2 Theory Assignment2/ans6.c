#include<stdio.h>

int factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}

double factorial_ratio(int a, int b)
{
    double ratio = factorial(a) / factorial(b);
    return ratio;
}
int main ()
{
    int num1=9, num2=2;
    double ratio = factorial_ratio(num1, num2);
    printf("Ratio: %lf\n", ratio);
    return 0;
}