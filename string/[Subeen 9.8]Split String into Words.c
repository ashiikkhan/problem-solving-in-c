/**
 * Problem: Now we will write another program that will take as input a string (which will contain many words). The maximum length of this string will be 1000. Words will have one or more spaces between them. Each word should be printed on a separate line as output. Punctuation cannot be printed and the first letter of the word is capitalized.
*/

#include<stdio.h>
int string_length(char string[])
{
    int i;
    for(i=0; string[i] != '\0'; i++);
    return i;
}

int main () 
{
    char str[1001], word[100];
    gets(str);

    int length=string_length(str);
    int i, j;
    int is_word_started=0;
    for(i=0, j=0;  i<length; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            //a-z er moddhe kono letter hole.
            if(is_word_started==0)
            {
                str[i]='A'+(str[i]-'a');
                word[j]=str[i];
                j++;
                is_word_started=1;
            }
            else 
            {
                word[j]=str[i];
                j++;
            }
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            //A-Z er moddhe konon letter hole. 
            if(is_word_started==0)
            {
                word[j]=str[i];
                j++;
                is_word_started=1;
            } 
            else 
            {
                str[i]='a'+(str[i]-'A');
                word[j]=str[i];
                j++;
            }
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            //0-9 er moddhe kono letter hole.
            if(is_word_started==0)
            {
                is_word_started=1;
            }
            word[j]=str[i];
            j++;
        }
        else
        {
            word[j]='\0';
            printf("%s\n", word);
            j=0;
            is_word_started=0;
        }
    }

    if(is_word_started)
    {
        word[j]='\0';
        printf("%s\n", word);
    }
    

    return 0;
}

/*
It reads in a string, splits it into individual words, capitalizes the first letter of each word, and prints each word on a separate line.

Here is a summary of how the code works:

1. The string_length() function calculates the length of a given string by iterating through it until it finds the null terminator.

2. In the main function, the code reads in a string using gets() and determines its length using the string_length() function.

3. The code then initializes two variables, i and j, which will be used to iterate through the string and the current word being processed, respectively. It also initializes a flag is_word_started to track whether or not the current word has started.
4. The code enters a loop that iterates through each character in the string. Inside the loop, it checks the ASCII value of the current character to determine its type. If the character is a lowercase letter, it capitalizes it and adds it to the current word. If the character is an uppercase letter or a digit, it simply adds it to the current word. If the character is none of the above, it assumes that the current word has ended and it prints the current word, resets the current word, and sets is_word_started to 0.

5. After the loop has completed, the code checks if the current word is non-empty. If it is, it prints the current word.

The code then returns 0 to indicate that it has completed successfully.
*/