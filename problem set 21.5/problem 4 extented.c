#include <stdio.h>

double calculate(char, double, double);

int main() 
{
    char op;
    printf("Enter an operator: ");
    scanf(" %c", &op);
    double a,b;
    printf("Enter two numbers: \n");
    scanf("%lf %lf", &a, &b);
    double ans = calculate(op, a, b);
    if(ans == 0)
        printf("%c is not a valid operator!\n", op);
    else 
        printf("%.2lf\n", ans);
    return 0;
}

double calculate(char op, double x, double y)
{
    switch (op)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            return 0;
    }
}
