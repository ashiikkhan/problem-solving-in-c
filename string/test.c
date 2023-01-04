#include <ctype.h>
#include <stdio.h>

#define MAX_LENGTH 1000

int main() {
    char input[MAX_LENGTH + 1];
    fgets(input, MAX_LENGTH + 1, stdin);

    char word[MAX_LENGTH + 1];
    int word_started = 0;
    int word_index = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        char c = input[i];
        if (isalnum(c)) {
            if (!word_started) {
                c = toupper(c);
                word_started = 1;
            }
            word[word_index++] = c;
        } else if (isspace(c)) {
            // ignore spaces
        } else {
            // assume character is punctuation
            if (word_started) {
                word[word_index] = '\0';
                printf("%s\n", word);
                word_index = 0;
                word_started = 0;
            }
        }
    }

    // print any remaining word
    if (word_started) {
        word[word_index] = '\0';
        printf("%s\n", word);
    }

    return 0;
}
