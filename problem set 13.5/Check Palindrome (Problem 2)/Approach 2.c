#include<stdio.h>
#include<string.h>

//1 = palindrome
//0 = not palindrome

int compare_string(char a[], char b[])
{
    int i=0;

    while(a[i]!='\0')
    {
        if(a[i]!=b[i])
            return 0;
        i++;
    }
    return 1;
}


int main ()
{
    char s[]="aabcbaa";

    int strLen=strlen(s);
    //reverse string:
    char reverse_str[strLen];

    for(int i=strLen-1, j=0; i>=0; i--, j++)
    {
        reverse_str[i]=s[j];
    }

    //now compare string with reverse string;
    int compared_ans=compare_string(s, reverse_str);

    if(compared_ans==1)
        printf("YES! String is Palindrome.");
    else
        printf("NO! String is Not Palindrome.");

    return 0;
}
