#include<stdio.h>
#include<string.h>

int main () 
{
    char s[]="bbbbaccddd";

    //step1: define an array size of 26 and initialize all elements to 0;
    int let[26]={0};

    //count the frequency of each letter;
    for(int i=0; i<strlen(s); i++)
    {
        int c = s[i]-'a';  //convert letter to array index;
        let[c]++;
    }

    // sort array in descending order
    // for(int i=0; i<26; i++)
    // {
    //     for(int j=i+1; j<26; j++)
    //     {
    //         if(let[i]<let[j])
    //         {
    //             int temp=let[i];
    //             let[i]=let[j];
    //             let[j]=temp;
    //         }
    //     }
    // }

    //1 4 2 3 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
    //a b c d e f g h i j k l m n o p q r s t u v w x y z

    for(int i=0; i<26; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            if(let[i]>0 && let[j]>0)
            {
                if(let[i]<let[j])
                {
                    
                }
            }
        }
    }

    printf("\n");
    for(int i=0; i<26; i++)
    {
        printf("%d ", let[i]);
    }
    return 0;
}