#include<stdio.h>
void find_average(int x, int y, float* average_pointer)
{
    *average_pointer = (x + y)/ 2.0;
}
int main ()
{
    int x, y;
    scanf("%d %d", &x, &y);
    float average;
    find_average(x, y, &average);
    printf("%.2lf", average);
    return 0;
}