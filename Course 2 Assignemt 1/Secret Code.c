#include<stdio.h>
int main () 
{
    int T; 
    scanf("%d", &T); 

    int codes[T];
    for(int i=0; i<T; i++)
    {
        scanf("%d", &codes[i]);
    }

    for(int i=0; i<T; i++)
    {
        if(codes[i]==0 || codes[i]==1)
        {
            printf("No\n");
        }
        else if(codes[i]>1)
        {
            int flag=0;
            for(int j=2; j<=codes[i]/2; j++)
            {
                if(codes[i]%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                printf("Yes\n");
            } 
            else {
                printf("No\n");
            }
        }
        
    }
    return 0;
}