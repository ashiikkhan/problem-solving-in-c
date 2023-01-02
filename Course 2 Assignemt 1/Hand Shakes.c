#include<stdio.h>
int main () 
{
    int N; 
    scanf("%d", &N);

    long long total_handshakes=0;

    if(N>=1 && N<=1000000000)
    {
        int i=1; 
        while (i<=N)
        {
            total_handshakes+=N-i;
            i++;
        }
        
    }

    printf("%lld", total_handshakes);

    // if(N>=1 && N<=1000000000)
    // {
    //     long long int total_handshakes=((N-1)*N)/2;
    //     printf("%lld", total_handshakes);
    // }

    return 0;
}