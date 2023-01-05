#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "bbbbaccddd";
    int count[26] = {0}; // initialize array to 0

    // count the frequency of each letter
    for (int i = 0; i < strlen(s); i++) {
        int c = s[i] - 'a'; // convert letter to array index
        count[c]++;
    }

    // sort array in descending order
    for (int i = 0; i < 26; i++) {
        for (int j = i + 1; j < 26; j++) {
            if (count[i] < count[j]) {
                int temp = count[i];
                count[i] = count[j];
                count[j] = temp;
            }
        }
    }

    // print the sorted string
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            for (int j = 0; j < count[i]; j++) {
                printf("%c", 'a' + i);
            }
        }
    }
    printf("\n");
    return 0;
}
