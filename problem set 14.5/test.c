#include <stdio.h>
#include <string.h>

int main()
{
    int m;
    scanf("%d ", &m);
    char result[1001]="";
    char temp[101];

    int len = 0; // result string length;
    for (int i = 0; i < m; i++)
    {
        gets(temp);  //input m times

        for (int j = 0; temp[j] != '\0'; j++)
        {
            result[len] = temp[j];
            len++;
        }

        if(i<m-1)
        {
            result[len]=' ';
            len++;
        }
    }
    result[len]='\0';

    printf("%s", result);

    return 0;
}
