#include<stdio.h>

// three integers as input and show who is bigger;
// if they are equal print as it is.
// it is a branching problem. 
int main () 
{
    int a, b, c; 
    scanf("%d%d%d", &a, &b, &c);

    if (a==b && b==c)
        printf("They all are equal.");
    else if(a>b && a>c)
        printf("A is Bigger");
    else if(b>a && b>c)
        printf("B is bigger.");
    else 
        printf("C is bigger");
    
    return 0;
}

