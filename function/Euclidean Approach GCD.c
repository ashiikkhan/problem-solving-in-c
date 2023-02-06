/*
euclidean approach of finding gcd
*/
#include<stdio.h>

int gcd(int x, int y)
{
    if(y==0)
        return x;
    return gcd(y, x%y); // invoke function in the function. and parameter x will receive the first value and in the invocation and y will receive the second value,
}

int main ()
{
    int a, b;
    while(1)
    {
        scanf("%d %d", &a,&b);
        int ans = gcd(a,b); //invocation of gcd function.
        printf("%d", ans);
    }
    return 0;
}
