#include<stdio.h>
#include<string.h>
void modify_string(char* s, int len)
{
    
    for(int i=0; i<len; i++)
    {
        int dec_value = s[i] - 96;
        if(dec_value%2==0)
        {
            s[i] = s[i] - 32;
        }
    }
}

int main () 
{
    char str[100];
    scanf("%s", str);
    modify_string(str, strlen(str));
    //print modified string:
    printf("%s", str);
    return 0;
}