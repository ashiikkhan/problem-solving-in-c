#include<stdio.h>

int main ()
{
    char s[100];
    gets(s);

    //string length;
    int i;
    int length=0;
    for(i=0; s[i]!='\0'; i++)
    {
        length+=1;
    }

    for(int i=0; i<length; i++)
    {
        if((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') ||
           (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y'))
        {
            //remove this vowel from string.
            for(int j = i; j < length; j++)
			{
				s[j] = s[j + 1];
			}
			length--;
			i--;
        }

        else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            //replace to lowercase if it is uppercase;
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]='a'+(s[i]-'A');
            }
        }
    }


    for(i=0; s[i]!='\0'; i++)
    {
        printf(".%c", s[i]);
    }

    return 0;
}
