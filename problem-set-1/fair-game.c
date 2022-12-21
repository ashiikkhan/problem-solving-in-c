#include<stdio.h>
#include<stdbool.h>

int main () 
{
    int a, b, c, d, fw, sw; 
    scanf("%d%d%d%d", &a, &b, &c, &d);
    bool check = false;

    //first winner
    if(a>b)
    {
        fw=a;
    }
    else 
    {
        fw=b;
    };

    //second winner
    if (c>d)
    {
        sw=c;
    }
    else 
    {
        sw=d;
    }

    //check fairness
    if(fw>c || fw>d)
    {
        check=true;
    }
    else if(fw<c || fw<d)
    {
        check=false; 
    }
    else if(sw>a || sw>b)
    {
        check=true; 
    }
    else if(sw<a || sw<b)
    {
        check=false;
    }
    
    
    return 0;
}