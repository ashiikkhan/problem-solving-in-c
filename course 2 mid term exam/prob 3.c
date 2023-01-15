#include<stdio.h>
#define ARR_SIZE 15
int main () 
{   
    int arr[ARR_SIZE];
    int initial_val=1;
    for(int i=0; i<ARR_SIZE; i++)
    {
        arr[i]= initial_val;
        initial_val*=2;
    }

    return 0;
}