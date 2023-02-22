//steps => create N size array => bubble sort function => swap using pass by reference;
#include<stdio.h>
#include<stdlib.h>

int* take_array(int n)
{
    int* arr = malloc(n*sizeof(int)); //memory allocation of the array
    for(int i=0; i<n; i++)
    {
        scanf("%d", arr+i);
    }
    return arr;
}
//bubble sort by using pass reference 
void swap_array(int* arr, int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void print_array(int* arr, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main ()
{
    int n;
    scanf("%d", &n);
    int* my_array = take_array(n); // input array function ta return kore array er first element er address;
    swap_array(my_array, n);
    print_array(my_array, n);
    free(my_array);
    return 0;
}