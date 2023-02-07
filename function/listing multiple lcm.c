//listing multiples method for finding lcm;
#include<stdio.h>
int lcm(int a, int b)
{
    for(int i=1; i<=b; i++)
    {
        if((a*i)%b==0)
        {
            return a*i;
        }
    }
}

int main () 
{
    int a, b; 
    scanf("%d%d", &a, &b);
    //check largest and smallest or set a as largest
    if(b>a)
    {
        int t=a;
        a=b;
        b=t;
    }
    int result=lcm(a, b);
    
    printf("%d", result);
    return 0;
}