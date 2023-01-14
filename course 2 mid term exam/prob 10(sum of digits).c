/*
How can you find the sum of digits of a number? Write a C program that will extract the digits of the given integer number as input and add them to find the required output. For example, if the input is 1235623, then the output will be 22. Because, 1+2+3+5+6+2+3 = 22. 

Ans: 
The process of finding the sum of digits of a number:
Steps: 
1. To store the sumation of all digits of then number, initialize a variable `sum` to 0.
2. Now, extract last digit of the number by taking the remainder when the number is divided by 10 and add it to the `sum`.
    For example: 123%10=3; sum+=3;
3. Then update the number by dividing 10, so that the next digit can be extracted. Otherwise every time we will get the same last digit;
    For example: 123/10=12;
4. Again take remainder from updated number and add it to the `sum` variable.
    For example: 12/10=2; sum+=2;
5. Repeat the process until all the digits have been extracted and added.
6. But to know that the all digits have been extracted need a condition. Which can be, if the number becomes 0 after repeated updates. When number becomes 0 (which is actually `number/10=0`), all numbers have been extracted.
    For example: 1/10=0; the updated number is 0.
6. Stop extracting and adding cuase nothing to extract or add.
*/

#include <stdio.h>

int main() {
    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}
