#include <stdio.h>
int main()
{
 
    int n,i,ans;
    int test;
    scanf("%d",&test);
    while(test--)
    {
        ans = -2;
        scanf("%d",&n);
        int arr[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        int max = arr[0];
        for(i=0; i<n; i++)
        {
            if(max<arr[i])
            {
                max = arr[i];
            }
        }
 
        for(i=0; i<n; i++)
        {
            if(arr[i]==max)
            {
                if(i>=1 && arr[i-1]!=max)
                {
                    ans = i;
                    break;
                }
                if(i<n-1 && arr[i+1]!=max)
                {
                    ans = i;
                    break;
                }
 
            }
        }
        printf("%d\n",ans+1);
 
    }
 
 
 
 
    return 0;
}