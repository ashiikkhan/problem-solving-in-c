#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);

    int len = strlen(s);
    char result[len];
    int k = 0;
    int i, j;
    for (i = 0; i < len; i++) {
        for (j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                break;
            }
        }
        if (j == i) {
            result[k] = s[i];
            k++;
        }
    }
    result[k] = '\0';

    printf("%s", result);
    return 0;
}
