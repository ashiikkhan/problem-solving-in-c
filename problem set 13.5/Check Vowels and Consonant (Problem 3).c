#include<stdio.h>
int main ()
{
    char email[]="ashiksust06@gmail.com", ch;

    int i,vowel,consonant,word,digit,other_char;
    i=vowel=consonant=word=digit=other_char=0;

    while((ch=email[i])!='\0')
    {
        if((ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') ||
            (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'))
                vowel++;
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
                consonant++;
        else if(ch==' ')
                word++;
        else if(ch>='0' && ch<='9')
                digit++;
        else
                other_char++;
        i++;
    }
    word++;// because if there is a single word in loop that will not be counted so out of loop we have increase one;


    printf("vowel: %d; \nconsonant: %d; \nword: %d; \ndigit: %d; \nother character: %d;", vowel, consonant, word, digit, other_char);


    return 0;
}
