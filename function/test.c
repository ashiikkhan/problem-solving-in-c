#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main()
{
    char word[MAX_LEN];
    int i, j, count;

    printf("Enter a word: ");
    scanf("%s", word);

    int len = strlen(word);

    for (i = 0; i < len; i++)
    {
        count = 1;
        for (j = i + 1; j < len; j++)
        {
            if (word[i] == word[j])
            {
                count++;
                word[j] = '0';
            }
        }
        if (word[i] != '0' && count > 1)
        {
            printf("'%c' repeated %d times\n", word[i], count);
        }
    }
    return 0;
}
