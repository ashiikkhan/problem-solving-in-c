#include<stdio.h>
#include<string.h>
void custom_strcat(char dest[], char src[])
{
    int dest_len=strlen(dest);
    int i;
    for(i=0; src[i]!='\0'; i++)
    {
        dest[dest_len+i]=src[i];
    }
    dest[dest_len+i]='\0';
}
int main () 
{
    int m; 
    scanf("%d", &m);
    char dest_string[1000]="";
    for(int i=1; i<=m; i++)
    {
        char src_string[20];
        scanf("%s", src_string);
        custom_strcat(dest_string, src_string);
        custom_strcat(dest_string, " ");
    }
    printf("%s", dest_string);
    return 0;
}

/**
 * we can also do the solution with strcat function :
 * The basic mechanism of strcat function is as follows:

It takes two parameters: a destination string and a source string.

It starts at the end of the destination string (the null character) and copies characters from the source string to the destination string, until it reaches the null character of the source string.

The final result is a concatenated string in the destination string.
*/