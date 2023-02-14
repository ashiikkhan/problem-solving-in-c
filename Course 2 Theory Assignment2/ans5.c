#include <stdio.h>

int add_three_nums(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int sum = add_three_nums(num1, num2, 0);
    printf("The sum is: %d\n", sum);
    return 0;
}
