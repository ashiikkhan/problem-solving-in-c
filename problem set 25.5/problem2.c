#include<stdio.h>
#include<stdlib.h>

int* create_array(int n)
{
    int* arr = (int*)malloc(n * sizeof(int));
    printf("Enter array elements: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    return arr;
}

int* sort_array(int* arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

int find_kth_largest(int* arr , int k, int n)
{
    return arr[n-k];
}
int find_kth_smallest(int* arr, int k)
{
    return arr[k-1];
}
int main () 
{
    int n;
    printf("Enter array size: \n");
    scanf("%d", &n);

    int* my_array = create_array(n);
    int* sorted = sort_array(my_array, n); //ascendingly sorted array
    int k;
    printf("Enter k val: \n");
    scanf("%d", &k);
    int kth_largest = find_kth_largest(sorted, k, n);
    int kth_smallest = find_kth_smallest(sorted, k);
    
    printf("%dth largest value is: %d\n", k, kth_largest);
    printf("%dth smallest value is: %d\n", k, kth_smallest);
    // Free the dynamically allocated memory
    free(my_array);
    free(sorted);

    return 0;
}
