#include<stdio.h>
#include<stdbool.h>
bool is_prime(int n){
    if(n<=1) return false;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int num_of_primes(int* integers, int len)
{
    int count_primes = 0;
    for(int i=0; i<len; i++)
    {
        if(is_prime(integers[i])){
            count_primes++;
        }
    }
    return count_primes;
}
int average_of_evens (int* integers, int len )
{
    int count_evens=0;
    int even_sum = 0;
    for(int i=0; i<len; i++)
    {
        if(integers[i]%2==0)
        {
            even_sum+=integers[i];
            count_evens++;
        }
    }
    int avg = even_sum / count_evens;
    return avg;
}
int main () 
{
    //take input
    int n;
    scanf("%d", &n);
    int int_array[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &int_array[i]);
    }
    //functions calling
    int primes = num_of_primes(int_array, n);
    int evens_avg = average_of_evens(int_array, n);

    //printing ouput
    printf("Prime Numbers: %d\n", primes);
    printf("Average of all evens: %d", evens_avg);
    return 0;
}