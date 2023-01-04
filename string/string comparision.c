//is 1st string is greater return 1; 
//if 2nd string is greater return -1; 
//if both are equal return 0;
#include<stdio.h>

int string_compare(char a[], char b[])
{
    int i = 0;
    while (a[i] != '\0' || b[i] != '\0')
    {
        if (a[i] > b[i])
            return 1;
        else if (b[i] > a[i])
            return -1;
        i++;
    }

    if (a[i] == '\0' && b[i] == '\0')
        return 0;
    else if (a[i] == '\0')
        return -1;
    else
        return 1;
}



int main (void)
{
    char string1[] = "hello";
    char string2[] = "world";
    char string3[] = "hello";

    printf("Comparing '%s' and '%s': %d\n", string1, string2, string_compare(string1, string2));
    printf("Comparing '%s' and '%s': %d\n", string1, string3, string_compare(string1, string3));
    printf("Comparing '%s' and '%s': %d\n", string2, string3, string_compare(string2, string3));

    return 0;
}
