#include <stdio.h>

int main()
{
    char S[] = "+***+";
    int a = 1, b = 2;
    int result = a; // start with a as the initial value

    int i;
    for(i = 0; S[i] != '\0'; i++) {
        if(S[i] == '+') {
            result += b; // add b to the result
        } else if(S[i] == '*') {
            result *= b; // multiply the result by b
        }
    }

    printf("%d\n", result); // the final result
    return 0;
}
