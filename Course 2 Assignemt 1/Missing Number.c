#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);

    int missing_num_arr[t];
    for(int i=1; i<=t; i++)
    {
        int S, A, B, C;
        scanf("%d %d %d %d", &S, &A, &B, &C);

        int missing_num=S-(A+B+C);
        int index_count=i-1;
        missing_num_arr[index_count]=missing_num;
    }

    for(int i=0; i<t; i++)
    {
        printf("%d\n", missing_num_arr[i]);
    }

    return 0;
}
