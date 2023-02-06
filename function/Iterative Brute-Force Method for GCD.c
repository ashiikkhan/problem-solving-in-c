/*
Iterative brute-force method:
The iterative brute-force approach to find the greatest common divisor (gcd) involves iterating through all the numbers from 1 to the minimum of the two numbers and checking if both the numbers are divisible by that number. The maximum number that satisfies both conditions is the gcd. In the code provided, the function "gcd" implements this approach.
*/
#include<stdio.h>
int min(int n, int m)
{
    if(n>m)
        return m;
    else
        return n;
}

int gcd(int x, int y)
{
    int min_num = min(x, y);
    int ans;
    for(int i=1; i<=min_num; i++)
    {
        if(x%i==0 && y%i==0)
        {
            ans=i;
        }
    }
    return ans;
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
