#include<stdio.h>
int main () 
{
    int N;
    scanf("%d", &N); 

    int rolls[N+1];
    for(int i=1; i<=N; i++)
    {
        scanf("%d", &rolls[i]);
    }

    int K; 
    scanf("%d", &K); 

    int new_arr[N+1];
    for(int i=1; i<=N; i++)
    {
        if(K<1 || K==N)
        {
            new_arr[i]=rolls[i];
        }
        else 
        {
            new_arr[i]=rolls[K+1];
            K++;
            if(K==N)
            {
                for(int j=i+1, g=1; j<=N; j++, g++)
                {
                    new_arr[j]=rolls[g];
                }
                break;
            }
        }
    }

    for(int i=1; i<=N; i++)
    {
        printf("%d ", new_arr[i]);
    }

    return 0; 
}