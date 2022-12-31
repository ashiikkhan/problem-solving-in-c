#include<stdio.h>
int main () 
{
    int start, end; 
    scanf("%d%d", &start, &end);

    while(start!=end)
    {
        start=start%12;
        if(start==0)
        {
            printf("%d ", 12);
        }
        else 
        {
            printf("%d ", start);
        }
        start++;
        if(start==end)
        {
            printf("%d ", start);
        }
    }
    return 0;
}