/**
 * find p-th largest value from an n size value;
*/

#include<stdio.h>
int main ()
{

//1. take an array as an input;
    int n, i;
    printf("array size: ");
    scanf("%d", &n);

    int input_arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &input_arr[i]);
    }
    //position which i want
    int p;
    printf("give the position: ");
    scanf("%d", &p);

//2. find the largest value from the input array;
    int largest=input_arr[0];

    for(i=1; i<n; i++)
    {
        if(input_arr[i]>largest)
        {
            largest=input_arr[i];
        }
    }
//3. then create a new array which size will be the largest+1;
    int new_arr[largest+1];
//4. assign 0 as value of all element in new array.
    for(i=0; i<=largest; i++)
    {
        new_arr[i]=0;
    }
//5. then assign 1 as value in the indexes which is equal to the input array element value;
    for(i=0; i<n; i++)
    {
        new_arr[input_arr[i]]+=1;
    }
    int count=0;
//6. now traverse this new array in reverse way and increase count.
    for(i=largest; i>=1; i--)
    {
        if(new_arr[i]==1)
        {
            count++;
        }
//7. if the count == the position value you want.
//8. then print the index which which is actually the value;
        if(count==p)
        {
            printf("%d th largest value is %d \n",p, i);
            break;
        }
    }


//9. find how many duplicate values and unique values: 
    int unique=0,duplicate=0;
    for(i=1; i<=largest; i++)
    {
        if(new_arr[i]==1)
            unique+=1;
        else if(new_arr[i]>1)
            duplicate+=1;
    }
    printf("unique: %d  duplicate: %d", unique, duplicate);

    return 0;
}
