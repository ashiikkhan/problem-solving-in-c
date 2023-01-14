#include <stdio.h>
#include<string.h>

int main()
{
    char a[10];
    char ch = 'a';
    for (int i = 0; i < 8; i++)
    {
        a[i] = ch + 8 - i;
    }
    a[8] = '\0';
    
    for(int i=0; i<strlen(a); i++)
    {
        printf("%c ", a[i]);
    }

    return 0;
}

/*
After the execution of the given block of code, the character array 'a' will have the following characters stored in it:
a[0]=97+8-0;=105;  a[0] = 'h'
a[1] = 'g'
a[2] = 'f'
a[3] = 'e'
a[4] = 'd'
a[5] = 'c'
a[6] = 'b'
a[7] = 'a'
a[8] = '\0'


In the code, the variable ch is initialized to 'a' and the for loop iterates from 0 to 8. In each iteration of the loop, the current value of i is subtracted from 8 and added to ch and the result is stored in the array 'a' at the current index i.
The last element of the array 'a' is set to the null character '\0' which indicates the end of a string of characters.

*/