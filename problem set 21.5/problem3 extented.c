#include<stdio.h>
int sum_of_first_and_last_digit(int);//function prototype;
int main () 
{
    int n; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int total_sum=0;
    for(int i=0; i<n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
        total_sum+=sum_of_first_and_last_digit(arr[i]);
    }
    printf("%d", total_sum);
    return 0;
}

int sum_of_first_and_last_digit(int n)
{
    int last_digit=n%10;
    int first_digit;
    while(n>0)
    {
        first_digit=n;
        n=n/10;
    }
    int sum=first_digit+last_digit;
    return sum;
}