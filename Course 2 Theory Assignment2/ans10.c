#include<stdio.h>

char get_grade(int mark) {
    if(mark >= 80 && mark <= 100) {
        return 'A';
    }
    else if(mark >= 60 && mark <= 79) {
        return 'B';
    }
    else if(mark >= 40 && mark <= 59) {
        return 'C';
    }
    else {
        return 'F';
    }
}

int main () 
{
    int mark;
    scanf("%d", &mark);
    char grade = get_grade(mark);
    printf("%c", grade);
    return 0;
}