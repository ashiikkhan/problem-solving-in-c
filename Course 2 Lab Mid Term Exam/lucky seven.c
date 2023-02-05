#include <stdio.h>
#include <string.h>

#define MAX_LEN 20

int is_palindrome(char *s, int len) {
    int i;
    for (i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    scanf("%d", &T);
    int t;
    char s[MAX_LEN + 1];
    for (t = 1; t <= T; t++) {
        scanf("%s", s);
        int len = strlen(s);
        printf("Case #");
        if (!is_palindrome(s, len)) {
            printf("1: Not Palindrome\n");
        } else if (len > 7) {
            printf("2: %c%d%c\n", s[0], len - 2, s[len - 1]);
        } else {
            printf("3: %s\n", s);
        }
    }
    return 0;
}
