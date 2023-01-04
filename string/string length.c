#include<stdio.h>
//length function
int string_length(char string[])
{
    int i;
    for(i=0; string[i]!='\0'; i++);
    return i;
}

int main ()
{
    char name[100];
    int name_length=0;

    while(NULL != gets(name))
    {
        name_length=string_length(name);
        printf("%d", name_length);
    }
    return 0;
}