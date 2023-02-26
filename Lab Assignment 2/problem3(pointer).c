#include<stdio.h>
int main () 
{
    int x, y;
    scanf("%d %d", &x, &y);
    int* ptr_x = &x;
    int* ptr_y = &y;
    printf("%d\n%d", *ptr_x, *ptr_y);
    return 0;
}