#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
bool is_power_of_2(int n)
{
    for(int i=1; pow(2, i)<=n; i++)
    {
        if(pow(2, i) == n)
        {
            return true;
        }
    }
    return false;
}
int main ()
{
    char S[100];
    scanf("%s", S);
    int strLen = strlen(S);
    int cost = 0;
    for(int i=0; i<strLen; i++)
    {
        cost+=(S[i]-96);
    }
    if(is_power_of_2(cost))
        printf("Yes");
    else
        printf("No");

    return 0;
}