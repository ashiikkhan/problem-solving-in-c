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
