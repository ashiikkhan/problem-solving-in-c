#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    gets(s);

    if(s[0]=='\0'){
        printf("NO");
        return 0;
    }
    int flag=0;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i] != '0' && s[i] != '1')
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("YES");
    else 
    printf("NO");

    return 0;
}
