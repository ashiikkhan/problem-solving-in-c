#include<stdio.h>
int main () 
{
    int input_array[]={1,2,3,4,5};
    
    for(int i=5-1, j=0; i>=0; i--, j++)
    {
        input_array[i]=input_array[j];
    }
    for(int i=0; i<5; i++)
    {
        printf("%d ", input_array[i]);
    }
    return 0; 
}