#include<stdio.h>
int main () 
{
    int n, i; 
    scanf("%d", &n);

    int input_arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &input_arr[i]);
    }

    //create new array by checking if the element is already exists or not:
    int new_arr[n];
    int index_count=0;
    
    for (int i = 0; i < n; i++)
    {
        int found=0;
        for(int j=0; j<n; j++)
        {
            if (input_arr[i]==new_arr[j])
            {
                found+=1;
            }
        }
        if(found==0)
        {
            new_arr[index_count]=input_arr[i];
            index_count+=1;
        }
    }

    for(int i=0; i<index_count; i++)
    {
        printf("%d ", new_arr[i]);
    }
    
    return 0; 
}