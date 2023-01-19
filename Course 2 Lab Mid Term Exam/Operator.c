#include <stdio.h>
#include <string.h>

int main()
{
    char S[20];
    fgets(S, sizeof(S), stdin);

    int a, b, i = 0, sum = 0;
    scanf("%d %d", &a, &b);

    if ((a >= 1 && a <= 50) && (b >= 1 && b <= 50))
    {

        while (S[i] != '\0')
        {
            if (S[i] == '+')
            {
                sum += a + b;
            }
            else if (S[i] == '*')
            {
                sum += a * b;
            }
            i++;
        }

        printf("%d", sum);
    }

    return 0;
}