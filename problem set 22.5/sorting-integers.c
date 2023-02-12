#include <stdio.h>

void sortArray(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: \n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    sortArray(arr, size);
    printf("The sorted array is: \n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
