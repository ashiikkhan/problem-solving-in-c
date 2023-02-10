/**
 * problem link: https://codeforces.com/contest/1691/problem/A
 * to get the concept read odd and even text file. this problem is about odds and evens sum.
*/
#include<stdio.h>
int remove_el(int);
int main() 
{
    int t;
    scanf("%d", &t);
    int i=0;
    int ans_arr[t];
    while (i<t)
    {
        int n;
        scanf("%d", &n);
        ans_arr[i]=remove_el(n);
        i++;
    }
    for(int i=0; i<t; i++)
    {
        printf("%d\n", ans_arr[i]);
    }
    return 0;
}
int remove_el(int x)
{
    int arr[x];
    int evens=0, odds=0;
    for(int i=0; i<x; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]%2==0)
            evens++;
        else 
            odds++;
    }
    if(evens>odds)
        return odds;
    else 
        return evens;
}

