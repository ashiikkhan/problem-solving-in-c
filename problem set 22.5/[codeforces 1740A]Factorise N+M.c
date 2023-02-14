//problem link: https://codeforces.com/problemset/problem/1740/A
#include<stdio.h>
#include<stdbool.h>
bool is_prime(int n){
    if(n<=1)
        return false;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int find_m(int n)
{
    int m=2; //2 is the first prime so starting from 2;
    while(is_prime(n+m))
    {
        m++;
        while(!is_prime(m))
        {
            m++;
        }
    }
    return m;
}
int main ()
{
    int t, given_prime;
    scanf("%d", &t);
    int ans[t];
    for(int i=0; i<t; i++)
    {
        scanf("%d", &given_prime);
        ans[i]=find_m(given_prime);
    }

    for(int i=0; i<t; i++)
    {
        printf("%d\n", ans[i]);
    }
    return 0;
}