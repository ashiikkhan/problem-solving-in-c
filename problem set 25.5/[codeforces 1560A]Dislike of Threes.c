#include <stdio.h>

// function to check if a number is divisible by 3 or ends with 3
int is_invalid_number(int num) {
    return (num % 3 == 0) || (num % 10 == 3);
}

// function to find the k-th number that is not divisible by 3 or does not end with 3
int find_kth_number(int k) {
    int count = 0;
    int num = 1;

    while (count < k) {
        if (!is_invalid_number(num)) {
            count++;
        }
        num++;
    }

    return num-1; // return the previous number (the k-th valid number)
}

int main () 
{
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);

    int result_array[t];

    for (int i = 0; i < t; i++) {
        int k;
        printf("Enter the value of k for test case %d: ", i+1);
        scanf("%d", &k);
        result_array[i] = find_kth_number(k);
    }
    
    printf("The k-th valid numbers are: ");
    for (int i = 0; i < t; i++) {
        printf("%d ", result_array[i]);
    }
    
    return 0;
}
