/*
problem: find max and second max ; min and second min value from an array; 
hints: 
1. set first index value as max/min; then compare;
2. for second max/min set next index value by comparing with first index.
*/

#include<stdio.h>
int main ()
{
    int n=5, i;
    int arr[]={20, 50, 10, 40, 60};

    int max, second_max, min, second_min;

    if(arr[0]>arr[1])
    {
         max=arr[0];
         second_max=arr[1];
         min=arr[1];
         second_min=arr[0];
    }
    else
    {
         max=arr[1];
         second_max=arr[0];
         min=arr[0];
         second_min=arr[1];
    }


    for(i=2; i<n; i++)
    {
        if(arr[i]>max)
        {
            second_max=max;
            max=arr[i];
        }
        else if (arr[i]>second_max)
        {
            second_max=arr[i];
        }
        //min and second min;
        if(arr[i]<min)
        {
            second_min=min;
            min=arr[i];
        }
        else if(arr[i]<second_min)
        {
            second_min=arr[i];
        }
    }
    printf("max: %d \nsecond-max: %d \nmin: %d \nsecond-min: %d", max, second_max, min, second_min);
    return 0;
}
