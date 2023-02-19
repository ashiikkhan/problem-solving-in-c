#include<stdio.h>
#include<stdlib.h>
int* create_array(int n)
{
    int* arr = (int*)malloc(n * sizeof(int));
    printf("Enter array elements: \n");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    return arr;
}
int find_ls_grt (int* arr, int n)
{
    int k;
    printf("Enter a val: \n");
    scanf("%d", &k);
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>k)
            count++;
        else if(arr[i]<k)
            count++;
    }

    return count;
}

int main () 
{
    int n; 
    scanf("%d", &n);
    int* my_array = create_array(n);
    int ans = find_ls_grt(my_array, n);
    printf("%d", ans);
    return 0;
}