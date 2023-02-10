/**
 * problem link: https://codeforces.com/problemset/problem/1660/A
*/
#include<stdio.h>
#define one_burle 1
#define two_burles 2
int main ()
{
    int t, a, b, i=0;
    scanf("%d", &t);
    int cannot_pay_without_change_arr[t];
    while(i<t)
    {
        scanf("%d %d", &a, &b);
        if(a==0)
            cannot_pay_without_change_arr[i]=1;
        else if(b==0)
            cannot_pay_without_change_arr[i]=a+1;
        else
            cannot_pay_without_change_arr[i]=(b*two_burles)+a+1;
        i++;
    }

    for(int i=0; i<t; i++)
    {
        printf("%d\n", cannot_pay_without_change_arr[i]);
    }    
    return 0;
}