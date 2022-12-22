/*
problem:Fibonacci sequence. 
fiboncci series up to certain numbers; 
hints: 
The Fibonacci sequence is a sequence 
where the next term is the sum of the previous two terms. 
The first two terms of the Fibonacci sequence are 0 followed by 1.
*/

#include<stdio.h>
int main () 
{
    int n, i=1, c=0;
    scanf("%d", &n);

    int fib_arr[100];
    fib_arr[0]=0, fib_arr[1]=1;

    while (fib_arr[i]<=n)
    {
        fib_arr[i+1]=fib_arr[i-1]+fib_arr[i];
        ++c;
        ++i;
    }
    
    for(i=0;i<c+1;i++)
    {
        printf("%d ", fib_arr[i]);
    }
     

    return 0; 
}