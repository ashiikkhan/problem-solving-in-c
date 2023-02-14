#include<stdio.h>
#include<stdbool.h>

bool checkChar(char myNum, char arr[], int s)
{
    for(int i = 0; i < s; i++)
    {
        if(arr[i] == myNum)
            return true;
    }
    return false;
}

int main()
{
    char digs[100];
    printf("Enter string of numbers: \n");
    scanf("%s", digs);
    int s = sizeof(digs);

    if(checkChar('1', digs, s) && checkChar('9', digs, s) && checkChar('7', digs, s))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
