#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);

    int len = strlen(s);

    int i, j;
    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (s[i] == s[j]) {
                int k = j;
                while (k < len) {
                    s[k] = s[k+1];
                    k++;
                }
                len--;
                j--;
            }
        }
    }

    for (i = 0; i < len; i++)
        printf("%c", s[i]);

    return 0;
}
