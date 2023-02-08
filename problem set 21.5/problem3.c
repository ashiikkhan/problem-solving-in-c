//4 digit value will be given is guaranteed.
//use only one loop in the whole solution.
//extented solution in problem 3 extended.c file (without these limitation.)
#include<stdio.h>
int first_last_dig_sum(int);
int main ()
{
    int n;
    scanf("%d", &n);
    int ans = first_last_dig_sum(n);
    printf("%d", ans);
    return 0;
}

int first_last_dig_sum(int n)
{
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        int val = arr[i];
        sum+=(val/1000 + val%10);
    }
    return sum;
}
