#include<stdio.h>   

//print the grade according to the input. 

int main () 
{
    int marks; 
    scanf("%d", &marks);

    if(marks>=0 && marks<=32)
        printf("F");
    else if(marks>=33 && marks<=39)
        printf("D");
    else if(marks>=40 && marks<=49)
        printf("C");
    else if(marks>=50 && marks<=59)
        printf("B");
    else if(marks>=60 && marks<=69)
        printf("A-");
    else if(marks>=70 && marks<=79)
        printf("A");
    else if(marks>=80 && marks<=100)
        printf("A+");
    else 
        printf("You have given an invalid number.");
        
    return 0;
}