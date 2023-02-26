/*
** sum of odd odd, even even
*/
#include<stdio.h>
int sum_of_odd_even(int arr[], int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        if(i%2==0 && arr[i]%2==0)
        {
            sum += (i+arr[i]);
        }
        else if(i%2==1 && arr[i]%2==1)
        {
            sum += (i+arr[i]);
        }
    }
    return sum;
}
int main () 
{
    int n;
    scanf("%d", &n);
    int int_arr[n+1];
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &int_arr[i]);
    }
    int ans = sum_of_odd_even(int_arr, n);
    printf("%d", ans);
    return 0;
}