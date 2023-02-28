#include<stdio.h>
#include<string.h>
void broken_key_output(char input[], char output[])
{
    int len = strlen(input); 
    int j=0; 
    for(int i=0; i<len; i++)
    {
        output[j]=input[i];
        if(i%2!=0){
            j++;
            output[j] = input[i];
            j++;
        } else {
            j++;
        }
    }
    output[j] = '\0';
}
int main () 
{
    char input[100], output[200];
    scanf("%s", input);
    broken_key_output(input, output);
    printf("%s", output);
    return 0;
}