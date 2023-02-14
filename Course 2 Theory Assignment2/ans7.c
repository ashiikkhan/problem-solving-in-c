#include <stdio.h>

void sort(int arr[], int n) {
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; i++)
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

double median(int arr[], int n) {
    sort(arr, n);
    if(n%2==0)
    {
        return (double)(arr[n/2]+arr[(n/2)-1])/2.0;
    }
    else {
        return (double) arr[(n/2)];
    }
}

int main() {
    int n;
    printf("enter an interger: \n");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    double med = median(arr, n);
    printf("The median is: %lf\n", med);
    return 0;
}
