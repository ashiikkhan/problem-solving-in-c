#include<stdio.h>
void sort_array(int* arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int find_min_ops(int* arr, int n)
{
    int min_ops = (arr[2]-arr[1]) + (arr[1]-arr[0]);
    for(int i=1; i<n-2; i++)
    {
        int ops = (arr[i+2]-arr[i+1]) + (arr[i+ 1]-arr[i]);
        if(min_ops>ops)
        {
            min_ops = ops;
        }
    }
    return min_ops;
}
void solve()
{
    int n;
    scanf("%d", &n);
    int sticks[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &sticks[i]);
    }
    sort_array(sticks, n);
    printf("%d\n", find_min_ops(sticks, n));

}

int main () 
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        solve();
    }
    return 0;
}