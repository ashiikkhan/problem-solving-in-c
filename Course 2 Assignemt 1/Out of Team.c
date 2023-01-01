#include<stdio.h>
int main () 
{
    int N, K, thrown_out_players=0; 
    scanf("%d%d", &N, &K);

    int runs_arr[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d", &runs_arr[i]);
        if(runs_arr[i]<K)
        {
            thrown_out_players+=1;
        }
    }
    printf("%d", thrown_out_players);
    return 0;
}