#include<stdio.h>
int main () 
{
    char a[10];
	a[0] = 98;
	a[1] = 97;
	a[2] = 'n';
	a[3] = 'a';
	a[4] = 'n';
	a[5] = 'a';
	a[6] = '\0';


    return 0;
}

/*
In the second statement, the value 98 is assigned to the first element of the char array 'a'. We know 98 is ASCII value of the character 'b'. So effectively the first element of the array 'a' becomes 'b'.
In the third statement, the value 97 is assigned to the second element of the char array 'a'. We know 97 is ASCII value of the character 'a'. That's why the second element of the array 'a' becomes 'a'.

Therefore, after the execution of this block of code, the character array 'a' will store the string "banana"
*/