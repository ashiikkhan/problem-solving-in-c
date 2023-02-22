#include<stdio.h>
#include<stdlib.h>

int* input_array(int n)
{
    int* arr = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        scanf("%d", arr + i);
    }
    return arr;
}

int find_sum(int* arr, int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%10==0)
        {
            sum+=arr[i];
        }
    }
    return sum;
}

int main ()
{
    int n;
    scanf("%d", &n);
    int* array = input_array(n);
    int sum = find_sum(array, n);
    printf("%d", sum);
    return 0;
}