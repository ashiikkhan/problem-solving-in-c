//lcm formula lcm(a,b)=(a*b)/gcd(a,b);

#include<stdio.h>
int gcd(int x, int y)
{
    int t;
    while(y!=0)
    {
        t=y;
        y=x%y;
        x=t;
    }
    return x;
}
int lcm(int x, int y)
{
    return (x*y)/gcd(x, y);
}

int main () 
{
    int num; //number of integers
    scanf("%d", &num);
    int arr[num]; //array of integers
    for(int i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = 1;
    result=arr[0];
    for(int i=1; i<num; i++)
    {
        result = lcm(result, arr[i]);
    }
    printf("%d", result);
    return 0;
}