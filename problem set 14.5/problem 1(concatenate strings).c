#include<stdio.h>
int main () 
{
    int m; 
    scanf("%d ", &m); 
    // read in the number of strings;
    // give a space after `%d` otherwise `gets()` function will count `enter` as an input;
    

    char result[100001]; // declare an string to store the result
    char temp[101];  // temporary string to read in each individual string
    int length=0;
    for(int i=0; i<m; i++)
    {
        gets(temp);

        // concatenate the string to the result
        for(int j=0; temp[j]!='\0'; j++)
        {
            result[length]=temp[j];
            length++;
        }
        // add a space after the word, if it's not the last word
        if(i<m-1)
        {
            result[length]=' ';
            length++;
        }

    }
    result[length]='\0'; //set null character to the last index;

    // print the final concatenated string with spaces
    printf("%s", result);
    return 0; 
}