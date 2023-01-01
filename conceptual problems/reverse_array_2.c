#include<stdio.h>
int main () 
{ 
    int temp;
    int arr[]={1, 2, 3, 4, 5, 6};
    for(int i=0, j=6-1; i<j; i++, j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0; i<6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}