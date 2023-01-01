#include<stdio.h>
int main () 
{

    int t, ii,i;
    scanf("%d", &t);

    int index_arr[t];
    for(ii=1; ii<=t; ii++)
    {
        int n, i;
        scanf("%d", &n); 

        int input_arr[n];
        for(i=1; i<=n; i++)
        {
            scanf("%d", &input_arr[i]);
        }

        int maxN=101;
        int new_arr[maxN];

        for(i=0; i<maxN; i++)
        {
            new_arr[i]=0;
        }

        for(i=1; i<=n; i++)
        {
            new_arr[input_arr[i]]+=1;
        }

        for(i=1; i<=n; i++)
        {
            if(new_arr[input_arr[i]]==1)
            {
               index_arr[ii]=i;
            }
        }
    }

    for(i=1; i<=t; i++)
    {
        printf("%d\n", index_arr[i]);
    }
   
    return 0; 
}