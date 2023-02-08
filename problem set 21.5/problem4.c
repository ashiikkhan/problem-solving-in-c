#include<stdio.h>
int calculate(char, int, int);
int main () 
{
    char op;
    printf("enter an operator: ");
    scanf("%c", &op);
    int a,b;
    printf("enter two integer: \n");
    scanf("%d %d", &a, &b);
    int ans = calculate(op, a, b);
    if(ans==0)
        printf("%c is not an operator!", op);
    else 
        printf("%d", ans);
    return 0;
}
int calculate(char op, int x, int y)
{
    if(op=='+')
        return x+y;
    else if(op=='-')
        return x-y;
    else if(op=='*')
        return x*y;
    else if(op=='/')
        return x/y;
    else 
        return 0;
}