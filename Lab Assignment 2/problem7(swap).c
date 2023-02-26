#include<stdio.h>
void swap(int* arr, int l, int r)
{
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
}
void print_array(int* arr, int len)
{
    for(int i=1; i<=len; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main () 
{
    //take input array:
    int n;
    scanf("%d", &n);
    int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //query and index for swap:
    int q, l, r;
    scanf("%d", &q);
    for(int i=1; i<=q; i++)
    {
        scanf("%d %d", &l, &r);
        swap(arr, l, r);
    }
    print_array(arr, n);
    return 0;
}