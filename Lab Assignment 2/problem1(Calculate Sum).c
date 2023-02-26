//sequence is 1+2+3-4-5-6+7+8+9-10-11-12+13+14+15-16-17-18....
#include<stdio.h>
int calculate_sum(int n)
{
    int sum =0;
    int counter=1;
    for(int i=1; i<=n; i++)
    {
        if(counter<=3)
        {
            sum+=i;
            counter++;
        }
        else if(counter<=6)
        {
            sum-=i;
            counter++;
        }
        else {
            counter=1;
            i--;
        }
    }
    return sum;
}
int main ()
{
    int n;
    scanf("%d", &n);
    int ans = calculate_sum(n);
    printf("%d\n", ans);
    return 0;
}