#include <stdio.h>

int sum_of_naturals(int n) {
    if (n == 1)
        return 1;
    return n + sum_of_naturals(n - 1);
}

int main() {
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("%d", sum_of_naturals(n));
    return 0;
}
