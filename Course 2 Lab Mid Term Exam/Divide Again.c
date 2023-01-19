#include<stdio.h>
#define P 3 
int main () 
{
    int n, amount; 
    printf("Enter a positive integer: \n");
    scanf("%d", &n);

    if(n%P==0)
    {
        amount=n/P;
        printf("%d", amount);
    } 
    else 
    {
        printf("%d", -1);
    }

    return 0;
}