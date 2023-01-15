#include <stdio.h>
#include <string.h>

int main()
{
    char a[10];
    char ch = 'a';
    for (int i = 0; i < 8; i++)
    {
        a[i] = ch + 8 - i;
    }
    a[8] = '\0';

    for (int i = 0; i < strlen(a); i++)
    {
        printf("%c ", a[i]);
    }

    return 0;
}

/*
After the execution of the given block of code, the character array 'a' will have the following characters stored in it:
a[0]=97+8-0;  a[0] = 105; a[0]= 'i';
a[1]=97+8-1;  a[1] = 104; a[1]= 'h';
a[2]=97+8-2;  a[2] = 103; a[2]= 'g';
a[3]=97+8-3;  a[3] = 102; a[3]= 'f';
a[4]=97+8-4;  a[4] = 101; a[4]= 'e';
a[5]=97+8-5;  a[5] = 100; a[5]= 'd';
a[6]=97+8-6;  a[6] =  99; a[6]= 'c';
a[7]=97+8-7;  a[7] =  98; a[7]= 'b';


In the code, the variable ch is initialized to 'a' and the for loop iterates from 0 to 7. In each iteration of the loop, the current value of i is subtracted from 8 and added to ch and the result is stored in the array 'a' at the current index i.
The last element of the array 'a' is set to the null character '\0' which indicates the end of a string of characters.

*/