#include <stdio.h>

int lexicographicCompare(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1;
        } else if (str1[i] > str2[i]) {
            return 1;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    } else if (str1[i] == '\0') {
        return -1;
    } else {
        return 1;
    }
}

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    int result = lexicographicCompare(str1, str2);
    if (result == 0) {
        printf("The two strings are lexicographically equal.\n");
    } else if (result < 0) {
        printf("%s is lexicographically smaller than %s.\nSo, %s will come first in the dictionary.\n", str1, str2, str1);
    } else {
        printf("%s is lexicographically larger than %s.\nSo, %s will come first in the dictionary.", str1, str2, str2);
    }
    return 0;
}

/*
question: 
What does lexicographical comparison mean? Explain with examples. How can we order strings in lexicographic order in C? 
ans: 
Lexicographical comparision:
Lexicographical comparision refers to comparing two strings based on the dictionary order of the characters. It compares the characters of the two strings one by one and stops as soon as difference is found. For example: 'apple' is lexicographically smaller than 'banana' because 'a' comes before 'b' in the dictionary. Similaryly "banana" is lexicographically larger than "banan", because 'a' comes after 'n' in the dictionary.So, "banan" will come first in the dictionary then "banana" will come. 
Here are some examples of lexicographical comparison:

"apple" < "banana" (because 'a' comes before 'b' in the dictionary)
"dog" < "dogs" (because 'g' comes before 's' in the dictionary)
"cat" > "bat" (because 'c' comes after 'b' in the dictionary)
"apple" == "Apple" (because lexicographical comparison is case-sensitive, 'A' comes after 'a' in the dictionary)


In this program, the `lexicographicCompare` function takes two strings as arguments and compares them character by character. The function uses a while loop to iterate through the characters of both strings, comparing the corresponding characters in each string. If a difference is found, the function returns -1 if the first string is lexicographically smaller, 1 if the first string is lexicographically larger, or 0 if the two strings are equal. The main function prompts the user to enter two strings, calls the lexicographicCompare function to compare them, and then prints the result.

//program:


We can also order strings in lexicographic order using the `strcmp()` function, which compares two strings character by character. The `strcmp()` function returns 0 if the two strings are equal, a negative number if the first string is lexicographically smaller than the second, and a positive number if the first string is lexicographically larger than the second. 
*/