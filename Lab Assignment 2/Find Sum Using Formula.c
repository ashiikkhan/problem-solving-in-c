#include<stdio.h>
int arithmetic_seq_sum(int n, int firstEl, int lastEl)
{
    //formula = (n*(firstEl + lastEl))/2;
    int sum = (n*(firstEl+lastEl))/2;
    return sum;
}
int main ()
{
    int n;
    scanf("%d", &n);
    int ans = arithmetic_seq_sum(n, 1, n);
    printf("%d", ans);
    return 0;
}