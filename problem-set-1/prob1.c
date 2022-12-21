#include<stdio.h>
//take two integer and show who is bigger. 
//1. this is a branching problem 

int main() 
{
    int first, second;
    scanf("%d %d", &first, &second);

    if(first==second)
        printf("They are equal");
    else if(first> second)
        printf("A is bigger than B");
    else 
        printf("B is greater than A");

    return 0;
}