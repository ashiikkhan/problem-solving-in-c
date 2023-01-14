/*
What does ASCII value of a character mean? How can you print the ASCII value of a character in C language?

ASCII:
The ASCII (American Standard Code for Information Interchange) value of a character is a numerical representation of that character. ASCII assigns a unique number to each character, including letters, digits, punctuation marks, and special characters. For example, the ASCII value of letter 'A' is 65, the ASCII value of letter 'a' is 97, and the ASCII value of digit '0' is 48.

We can print ASCII value of a character in C using the `(int)` type cast operator, which converts the character to it's corresponding integer value, which is it's ASCII value.
Type cast operator: 
In C, a type cast operator is used to explicitly convert a value from one data type to another data type. The type cast operator is the set of parentheses `()` containing the desired type. For example, to convert an integer variable to a floating-point variable, you would use the type cast operator `(float)` as follows: int x = 5;
float y = (float) x;

Here, the `(int)` type cast operator is used to convert the character to its integer equivalent, which is its ASCII value.

*/

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII value of %c is %d\n", ch, (int)ch);
    return 0;
}
