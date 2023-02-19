#include<stdio.h>
void print_numbers(int n)
{
    if(n==0)
        return;
    printf("%d ", n);
    print_numbers(n-1);
}

int main ()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("All numbers from %d to 1: ", n);
    print_numbers(n);
    return 0;
}