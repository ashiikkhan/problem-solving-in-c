/**
 * In permutation, "n" refers to the total number of items being permuted and "r" refers to the number of items being selected in each permutation. The number of permutations of "n" items taken "r" at a time is calculated as n!/(n-r)! where "!" represents factorial, i.e. the product of all positive integers up to that number.
*/
#include<stdio.h>
int permute(int , int);
int fact(int);
int main () 
{
    int n, r;
    printf("total number of items being permuted: ");
    scanf("%d", &n);
    printf("number of items being selected in each permutation: ");
    scanf("%d", &r);
    int ans = permute(n, r);
    printf("%d", ans);
    return 0;
}

int permute(int n, int r)
{
    int permutation_ans = fact(n)/fact(n-r);
    return permutation_ans;
}
int fact(int n)
{
    int factorial =1;
    for(int i = n; i>=1; i--)
    {
        factorial= factorial*i;
    }
    return factorial;
}