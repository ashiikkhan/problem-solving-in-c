#include<stdio.h>
#include<stdbool.h>

int max(int x, int y) {
    if(x>y){
        return x; 
    } else {
        return y; 
    }
}

int min(int x, int y) {
    if(x<y){
        return x; 
    } else {
        return y; 
    }
}

int main () 
{
    int n, i; 
    scanf("%d", &n);
    bool ans_arr[n]; 

    for(i=1; i<=n; i++)
    {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);

        //first winner
        int first_winner=max(a, b);
        int first_runner=min(a, b);
        //second winner
        int second_winner=max(c, d);
        int second_runner=min(c, d);
        //check fairness
        if(first_winner>second_runner && second_winner>first_runner)
        {
            ans_arr[i]=true; 
        } else {
            ans_arr[i]=false;
        }
    }

    for(i=1; i<=n; i++)
    {
        if(ans_arr[i]==true)
        {
            printf("YES\n");
        } 
        else 
        {
            printf("NO\n");
        }
    }
    
    
    return 0;
}