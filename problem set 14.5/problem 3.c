#include<stdio.h>
#include<string.h>

int main ()
{
    char s[100];
    gets(s);

    int order_val[27]={0};
    int idx=0;

    for(int i=0; i<strlen(s); i++)
    {
        //index find;
        idx=s[i]-96;
        order_val[idx]++;
    }
    int cost=0;
    for(int i=1; i<27; i++)
    {
        if(order_val[i]>0)
        {
            cost+=(order_val[i]*i);
        }
    }

    if(cost%2==0)
    {
        char ch=94;
        int quotient=cost/2;
        printf("YES\ncost=%d%c%d",2,ch,quotient);

    }
    else 
    {
        printf("NO");
    }

    return 0;
}
