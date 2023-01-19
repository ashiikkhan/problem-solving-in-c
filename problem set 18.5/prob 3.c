#include<stdio.h>

int main () 
{
    int n;
    printf("Enter a positive integer: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //the sum of last digit of the given n integers.
    int sum=0, last_digit=0;
    for(int i=0; i<n; i++)
    {
        last_digit=arr[i]%10;
        sum+=last_digit;
    }
    printf("Sum of last digits of array elements = %d", sum);

    return 0;
}