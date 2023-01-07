#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "hello";
    int strLen = strlen(s);

    char reverse_str[strLen + 1];  // +1 for the null character

    strrev(s);  // reverse the original string in place
    for (int i = 0; i < strLen; i++)
    {
        reverse_str[i] = s[i];  // copy the reversed string into the new array
    }
    reverse_str[strLen] = '\0';  // add the null character to the end of the array

    printf("Original string: %s\n", s);
    printf("Reversed string: %s\n", reverse_str);

    return 0;
}
