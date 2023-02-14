#include<stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int nums[n];
    int x = 0;
    for(int i = 2; i <= n; i += 2)
    {
        nums[x] = i;
        x++;
    }
    for(int i = 1; i <= n; i += 2)
    {
        nums[x] = i;
        x++;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
    printf("The %dth element in this sequence is %d.", k, nums[k - 1]);

    return 0;
}
