#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool is_array_beautifull(int* arr, double len)
{
    int count_seven=0;
    for(int i=0; i<len; i++)
    {
        int flag=0;
        while (arr[i]>0)
        {
            if(arr[i]%10==7){
                flag=1;
            }
            arr[i] = arr[i]/10;
        }
        if(flag==1)
            count_seven++;
        
    }
    if(count_seven>=ceil(len/2.00))
        return true;
    return false;
}
int main () 
{
    int n;
    scanf("%d", &n);
    int int_arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &int_arr[i]);
    }
    if(is_array_beautifull(int_arr, n))
        printf("Beautiful");
    else 
        printf("Ugly");
    return 0;
}