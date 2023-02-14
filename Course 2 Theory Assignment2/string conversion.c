#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isCapital(char ch)
{
    if(ch>=65 && ch<=90)
        return true;
    return false;
}
bool isSmall(char ch)
{
    if(ch>=97 && ch<=122)
        return true;
    return false;
}
char toCapital(char ch) {
    return ch-32;
}
char toSmall(char ch) {
    return ch+32;
}
int main () {
    char s[100];
    scanf("%s", s);
    int len = strlen(s);
    for(int i=0; i<len; i++)
    {
        if(isSmall(s[i]))
            s[i]=toCapital(s[i]);
        else if(isCapital(s[i]))
            s[i]=toSmall(s[i]);
    }
    printf("Modified String: %s\n", s);
    return 0;
}