#include<stdio.h>
int main ()
{
    int a, b, c;
    int *pa, *pb, *pc; //declaration of pointers

    printf("Enter three integers: \n");
    scanf("%d %d %d", &a, &b, &c);

    //assign addresses of a, b, c to respective pointers
    pa = &a;
    pb = &b;
    pc = &c;

    //calculate sum using pointer arithmetic:
    int sum = *pa + *pb + *pc;
    printf("Sum of %d, %d, %d is: %d\n", a, b, c, sum);

    return 0;
}