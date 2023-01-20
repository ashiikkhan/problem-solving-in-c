#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int counts[t];  // declare an array to store counts
    for (int k = 0; k < t; k++) {
        int n;
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", s);
        int count = 0;
        for (int i = 0; i < n-1; i++) {
            if (s[i] == '0' && s[i+1] == '1') {
                count++;
            } else if (s[i] == '1' && s[i+1] == '0') {
                count++;
            }
        }
        counts[k] = count; // store the count for the current test case
    }
    for(int i=0; i<t; i++) // print all the counts
        printf("%d\n", counts[i]);
    return 0;
}
