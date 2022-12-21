/*
*** Accumulation of Dominoes 
*** Codeforces Problem 
*/


#include <stdio.h>
int main () 
{
    long long int n, m;
    long long int tight_dominoes; 
    scanf("%lld %lld", &n, &m);

    if(n==1 && m==1)
        tight_dominoes=0;
    else if(n==1 && m>1)
        tight_dominoes=m-1;
    else if(n>1 && m==1)
        tight_dominoes=n-1;
    else if (n>1 && m>1)
        tight_dominoes=(m-1)*n;

    printf("%lld", tight_dominoes);
    
    return 0;
}