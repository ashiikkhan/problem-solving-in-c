#include<stdio.h>
int main () 
{
    int N; 
    scanf("%d", &N); 

    int marks[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d", &marks[i]);
    }

    int highest=marks[0];
    for(int i=0; i<N; i++)
    {
        if(marks[i]>highest)
        {
            highest=marks[i];
        }
    }

    for(int i=0; i<N; i++)
    {
        printf("%d ", highest-marks[i]);
    }

    // int diff_arr[N];
    // for(int i=0; i<N; i++)
    // {
    //     diff_arr[i]=highest-marks[i];
    // }
    // for(int i=0; i<N; i++)
    // {
    //     printf("%d ", diff_arr[i]);
    // }
    return 0; 
}