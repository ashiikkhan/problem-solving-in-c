#include<stdio.h>
void print_consecutive_evens(int n)
{
    int quotient = n/4;
    int arr[4];
    if(quotient%2==0)
    {
        int start = quotient - 4;
        for(int i=0; i<4; i++)
        {
            arr[i] = start;
            start+=2;
        }
    }
    else {
        int start = quotient -3;
        for(int i=0; i<4; i++)
        {
            arr[i] = start;
            start+=2;
        }
    }
    for(int i=0; i<4; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main ()
{
    int t, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        print_consecutive_evens(n);
    }
    return 0;
}


/**
 * Or you can try this: 

 #include <stdio.h>

void print_consecutive_evens(int N) {
    int n1 = N/4;
    if(n1%2==0)
    {
        n1-=4;
        printf("%d %d %d %d\n", n1, n1+2, n1+4, n1+6);
    }
    else {
        n1-=3;
        printf("%d %d %d %d\n", n1, n1+2, n1+4, n1+6);
    }
}



int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);

        print_consecutive_evens(N);
    }

    return 0;
}

*/