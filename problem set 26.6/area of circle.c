#include<stdio.h>
double calculate_area(double radius)
{
    double area;
    const double pi = 3.14159;
    area = pi * radius * radius;
    return area;
}
int main ()
{
    double r;
    scanf("%lf", &r);
    
    printf("%lf", calculate_area(r));
    return 0;
}