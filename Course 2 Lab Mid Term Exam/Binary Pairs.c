#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int counts[t];
    for (int k = 0; k < t; k++)
    {
        int n;
        scanf("%d ", &n); // space is for skipping fgets() enter inclusion
        char s[n + 1];
        fgets(s, sizeof(s), stdin);
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '0' && s[i + 1] == '1')
            {
                count++;
            }
            else if (s[i] == '1' && s[i + 1] == '0')
            {
                count++;
            }
        }
        counts[k] = count;
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d\n", counts[i]);
    }
    return 0;
}