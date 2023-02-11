#include<stdio.h>
#include<stdbool.h>
bool is_prime(int n);
int main () 
{
    int n; 
    scanf("%d", &n);
    int num=2;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            while(!is_prime(num))
            {
                num++;
            }
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

bool is_prime(int n)
{
    if(n<=1) return false;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

void create_pattern(int n)
{
    
}