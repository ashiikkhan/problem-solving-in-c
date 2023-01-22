#include <stdio.h>
int main()
{
    int n, mx_count = 0, count = 0;
    scanf("%d ", &n); // space is for fgets function
    char signs[n + 1];
    fgets(signs, sizeof(signs), stdin);
    char prevus_ch = ' '; // previous character
    // travers array of characters
    for (int i = 0; i < n; i++) {
        if (signs[i] == prevus_ch || prevus_ch == ' ') {
            count++;
        } else {
            mx_count = count > mx_count ? count : mx_count;
            count = 1;
        }
        prevus_ch = signs[i];
    }
    mx_count = count > mx_count ? count : mx_count;
    printf("%d", mx_count);
    return 0;
}