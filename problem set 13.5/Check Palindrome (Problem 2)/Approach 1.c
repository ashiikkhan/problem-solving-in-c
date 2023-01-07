#include<stdio.h>
#include<string.h>

/*
approach 1: compare normal and reverse order together.
*/
int main ()
{
    char s[]="cabbaa";
    int strLen=strlen(s);

    int flag=1;
    for(int i=strLen-1, j=0; i>=0; i--, j++)
    {
        if(s[j]!=s[i])
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
        printf("YES! String is Palindrome.");
    else
        printf("NO! String is Not Palindrome.");

    return 0;
}
