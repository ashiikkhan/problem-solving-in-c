#include <stdio.h>
int main () 
{
    int start, end; 
    scanf("%d %d", &start, &end);

    while (start!=end)
    {
        printf("%d", start);
         start++;
    }
    
    return 0; 
}