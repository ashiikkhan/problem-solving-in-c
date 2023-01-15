/*
char s = “america”
What is wrong with this C statement. Mark the errors and fix them.
solution:
The C statement "char s= "america";" is incorrect because of following reasons:
1. The string "america" in enclosed in double-quotes, idicating that it is a string constant, not a single character. However, the variable "s" is of type char, which can only hold a single character.
2. The string "america" contains 7 characters which is more than the size of a char variable.

To fix this error, we can either assign a single character to the char variable 's' like this:
char s = 'a';
or we can declare a char array of the appropriate size and store the string in it like this:
char s[] = "america";
*/