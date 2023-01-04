#include<stdio.h>
#include<string.h>
int main ()
{

    int t;
    scanf("%d", &t);

    char word[t][101];
    for(int i=0; i<t; i++)
    {
        scanf("%s", word[i]);
    }


    for(int i=0; i<t; i++)
    {
        int l=strlen(word[i]);
        if(l>10)
        {
            printf("%c%d%c\n", word[i][0], l-2, word[i][l-1]);
        }
        else
        {
            printf("%s\n", word[i]);
        }

    }

    return 0;
}