#include<stdio.h>
int divisibility_count_by_three(int arr[], int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%3==0)
            count++;
        else if(arr[i]%5==0)
            count--;
    }
    return count;
}
int divisibility_count_by_five(int arr[], int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%5==0)
            count++;
    }
    return count;
}
int solve()
{
    //take input 
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int div_count_3 = divisibility_count_by_three(arr, n);
    int div_count_5 = divisibility_count_by_five(arr, n);
    int total = div_count_3 + div_count_5;
    if(total==0)
        return -1;
    return total;

}
int main () 
{
    
    int ans = solve();
    printf("%d", ans);
    return 0;
}