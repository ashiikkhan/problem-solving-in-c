/*
Explain Bubble Sorting. Suppose you are given an array of integers 12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4. What will be the sequence of these integers if we run Bubble sort for only 5 iterations? 
Ans:
Bubble sort is a simple sorting algorithm that repeatedly steps through the list to be sorted, compares each pair of adjacent items and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, which indicates that the list is sorted.

The basic idea behind bubble sort is to repeatedly swap adjacent elements if they are in the wrong order.

the sequence of these integers if we run Bubble sort for only 5 iterations: 
1 3 7 9 11 4 12 15 19 62 73
*/

#include<stdio.h>

int main ()
{
    int arr[]= {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    int n=sizeof(arr)/sizeof(arr[0]);

    int i, j, temp, iterations=5;
    for (i = 0; i < iterations; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for( i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}