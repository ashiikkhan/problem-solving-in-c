#include<stdio.h>
//identify an integer if it is odd or even
//branching problem

int main () 
{
    int n; 
    scanf("%d", &n);

    if(n%2==0)
        printf("%d is even number.", n);
    else 
        printf("%d is odd number.", n);
        
    return 0;
}