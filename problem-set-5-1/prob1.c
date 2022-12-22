/*
problem:Fibonacci sequence. 
fiboncci series up to n terms; 
hints: 
The Fibonacci sequence is a sequence 
where the next term is the sum of the previous two terms. 
The first two terms of the Fibonacci sequence are 0 followed by 1.
*/
#include<stdio.h>
int main ()
{
    int n, i; 
    scanf("%d", &n);

    int fib_arr[n];
    fib_arr[0]=0, fib_arr[1]=1; 

    for(i=2; i<n; i++)
    {
        fib_arr[i]=fib_arr[i-2]+fib_arr[i-1];
    }

    for(i=0; i<n; i++)
    {
        printf("%d ", fib_arr[i]);
    }

    return 0;
    }
