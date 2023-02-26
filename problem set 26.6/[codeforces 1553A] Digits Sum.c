#include<stdio.h>
void count_func()
{
    int n;
    scanf("%d", &n);
    int count=0;
    for(int i=9; i<=n; i+=10)
    {
        count++;
    }
    printf("%d\n", count);
}
int main () 
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        count_func();
    }
    return 0;
}