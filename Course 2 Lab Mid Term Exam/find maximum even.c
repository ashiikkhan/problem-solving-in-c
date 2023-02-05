#include<stdio.h>
#include<string.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int max=0;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        //first of all find max even value.
        if(arr[i]>max && max%2==0)
        {
            max=arr[i];
        }
    }
    //perform summation on every two values of the array and check it is even or not. and then compare with the max even.
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int sum= arr[i]+arr[j];
            if(sum>max && sum%2==0)
            {
                max=sum;
            }
        }
    }
    printf("%d", max);


    return 0;
}
