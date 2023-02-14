#include<stdio.h>
#include<string.h>
void shift_str(char str[], int shift)
{
    int len = strlen(str);
    for(int i=0; i<len; i++)
    {
        if(str[i]+shift <= 'z')
            str[i] = str[i] + shift;
        else 
            str[i] = 'a' + (str[i] + shift - 'z' -1);
    }
}
int main ()
{
    char str[100];
    scanf("%s", str);
    int shift;
    scanf("%d", &shift);
    shift_str(str, shift);
    printf("%s", str);
    return 0;
}