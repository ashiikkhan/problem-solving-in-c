#include <stdio.h>
#include <string.h>

#define NUM_LETTERS 26

int main () 
{
    char s[]="bbbbaccddd";

    int counts[NUM_LETTERS]={0};
    
    for(int i=0; i<strlen(s); i++)
    {
        int c = s[i] - 'a';
        counts[c]++;
    }

    for(int i=0; i<NUM_LETTERS; i++)
    {
        int max_count = -1;
        char ch;
        int index=-1;
        for(int j=0; j<NUM_LETTERS; j++)
        {
            if(max_count<counts[j])
            {
                max_count=counts[j];
                ch = j + 'a';
                index=j;
            }
        }

        for(int i=0; i<max_count; i++)
        {
            printf("%c", ch);
        }

        counts[index]=0;

    }

    return 0;
}




/**
 -------step 1:
  initialize an integer array size of 26(number of total letters). The `counts` array is an array of integers that is used to store the count of each letter in the string.
 -------step 2:
  this `counts` array initialized to 0; 
 -------step 3:
  Iterate through the string and count the frequency of each letter by using for loop and update `counts` array by indexes which will be found by converting the letter to int/array index. ('a'-'a'=0; 'b'-'a'=1).
 -------step 4:
  find the maximum frequency of letters and corresponding character/ letter.
 -------step 5:
  after getting first maximum frequency get the index of that value and assign it as 0; because of fingiding the second maximum frequency otherwise it will give the same first max freq and same character. 
 -------step 6:
  print the character `ch`, frequency times.
*/