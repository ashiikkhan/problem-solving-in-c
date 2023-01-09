#include<stdio.h>

int main () 
{
    int arr[]={10, 700, 90, 30, 150, 21, 16, 5};
    int n=sizeof(arr)/sizeof(arr[0]);

    int i, j, temp;

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}