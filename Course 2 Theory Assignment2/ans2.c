/*
int i=0;
while(i<10)
{
	printf(“I am inside the loop”);
}
What is wrong with this block of C code? Mark the errors and fix them. 
*/
#include<stdio.h>
int main ()
{
    int i = 0;
    while (i < 10) {
        printf("I am inside the loop\n"); 
        i++;
    }
    return 0;
}
/*
Ans: 
Error 1: The while loop will run indefinitely because the condition (i<10) will always be true because of not increamenting the value of i variable. So, to fix this we need to incease the value of i in each iteration.
Error 2: The printf() function don't have new line character which will give us an wierd output that will be defficult to read. So, we need to put a newline char "\n" in printf() function after the sentence.

*/