//is 1st string is greater return 1;
//if 2nd string is greater return -1;
//if both are equal return 0;
#include<stdio.h>
#include<string.h>

int string_compare(char a[], char b[])
{
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0')
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
    char string1[101];
    char string2[101];
    gets(string1);
    gets(string2);

    for(int i=0; i<strlen(string1); i++)
    {
        if(string1[i]>='A' && string1[i]<='Z')
        {
            string1[i]+=32;
        }
    }

    for(int i=0; i<strlen(string2); i++)
    {
        if(string2[i]>='A' && string2[i]<='Z')
        {
            string2[i]+=32;
        }
    }

    printf("%d",string_compare(string1, string2));


    return 0;
}

