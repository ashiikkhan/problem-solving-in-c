#include<stdio.h>
#include<string.h>
int is_binary_str(int len, char s[]);
int main ()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    int len= strlen(str)-1;
    
    if(is_binary_str(len, str))
        printf("YESS");
    else 
        printf("NOO");
    return 0;
}
int is_binary_str(int len, char s[])
{
    for(int i=0; i<len; i++)
    {
        if(s[i]!='0' && s[i]!='1')
            return 0;
    }
    return 1;
}