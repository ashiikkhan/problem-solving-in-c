//problem link: https://codeforces.com/problemset/problem/1760/A
#include<stdio.h>
int medium_num(int, int, int);
int main ()
{
    int t;
    scanf("%d", &t);
    int arr[t];
    for(int i=0; i<t; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        arr[i]=medium_num(a, b, c);
    }
    for(int i=0; i<t; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
int medium_num(int a, int b, int c)
{
    if((a<b && a>c) || (a>b && a<c))
        return a;
    else if((b<a && b>c) || (b>a && b<c))
        return b;
    else 
        return c;
}