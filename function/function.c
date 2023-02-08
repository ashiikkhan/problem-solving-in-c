/* *
 * take a number
 * '7' must be present
 * digit summation > 10
 * last digit == prime number;
 * check through functions!!
 * if satisfy all condition then it will be your number!!!
 * */
#include<stdio.h>
//basic syntax of function
//return_type functin_name(argmuents/parameters with their type)
int is_seven_present(int); //fucntion prototype / function declaration.
int sum(int); //fucntion prototype / function declaration.
int is_last_digit_prime(int); //fucntion prototype / function declaration.

int main ()
{

    int n;
    scanf("%d", &n);
    //function invocation
    if(is_seven_present(n)==1 && sum(n)>10 && is_last_digit_prime(n)==1)
        printf("it's your number!!!");
    else
        printf("it's not your number!!!");
    return 0;
}
//function definition / function body
int is_seven_present(int n)
{
    while(n>0)
    {
        if(n%10==7)
            return 1;
        n=n/10;
    }
    return 0;
}
//function definition / function body
int sum(int n)
{
    int summation=0;
    while(n>0)
    {
        summation+=n%10;
        n/=10;
    }
    return summation;
}
//function definition / function body
int is_last_digit_prime(int n)
{
    int last_digit=n%10;
    if(last_digit==1)
        return 0;
    for(int i=2; i<last_digit; i++)
    {
        if(last_digit%i==0)
            return 0;
    }
    return 1;
}
