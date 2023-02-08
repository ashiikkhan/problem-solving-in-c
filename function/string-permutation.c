/**
 * suppose your are given a string.
 * now how many ways it can be arrranged
 * use repetition formula [letters can be repeated]
*/
#include<stdio.h>
#include<string.h>

int permute(int, int);
int fact(int);

int main () 
{
    char word[20];
    printf("enter a word: ");
    fgets(word, sizeof(word), stdin);
    int len = strlen(word)-1;
    //we need n, r, p, q 
    int n, count;
    n=len;
    //check any letter repeats or not? if repeats in permutation formula will be n!/r!*p!*q!; r,p,q are repetition times of different letters. if there is 4 different word repeats it will take r, p, q, s, etc. it is depend on you.
    int repeacted_letters_fact=1; //this factorial ans will divide the n!;
    for (int i = 0; i < len; i++)
    {
        count = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (word[i] == word[j])
            {
                count++;
                word[j] = '0';
            }
        }
        if (word[i]!='0' && count > 1)
        {
            repeacted_letters_fact *= fact(count);
        }
    }
    int ans = permute(n,repeacted_letters_fact);
    printf("This can be arranged in %d ways.", ans);

    return 0;
}

int permute(int n, int r)
{
    int permutation_ans = fact(n)/r;
    return permutation_ans;
}
int fact(int n)
{
    int factorial=1;
    for(int i=n; i>=1; i--)
    {
        factorial*=i;
    }
    return factorial;
}

