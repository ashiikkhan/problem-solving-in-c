#include <stdio.h>
#include <string.h>

#define NUM_LETTERS 26

int main() {
    char s[] = "bbbbaccddd";
    int counts[NUM_LETTERS] = {0}; // initialize array elements to 0
    char letters[NUM_LETTERS] = {0}; // initialize array elements to 0

    // count the frequency of each letter
    for (int i = 0; i < strlen(s); i++) {
        int c = s[i] - 'a'; // convert letter to array index
        counts[c]++;
        letters[c] = s[i];
    }

    // sort the arrays in descending order of count
    for (int i = 0; i < NUM_LETTERS; i++) {
        for (int j = i + 1; j < NUM_LETTERS; j++) {
            if (counts[i] < counts[j]) {
                int temp = counts[i];
                counts[i] = counts[j];
                counts[j] = temp;
                char temp2 = letters[i];
                letters[i] = letters[j];
                letters[j] = temp2;
            }
        }
    }

    // print the sorted string
    for (int i = 0; i < NUM_LETTERS; i++) {
        if (counts[i] > 0) {
            for (int j = 0; j < counts[i]; j++) {
                printf("%c", letters[i]);
            }
        }
    }
    printf("\n");
    return 0;
}
