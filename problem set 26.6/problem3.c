#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n;
    scanf("%d", &n);

    //dinamically allocate memory 
    int* arr = (int*)malloc(n*sizeof(int));

    //scan array elements
    for(int i=0; i<n; i++)
    {
        scanf("%d", arr+i);
    }
    //print array elments 
    for(int i=0; i<n; i++)
    {
        printf("%d ", *(arr + i));
    }
    free(arr);
    return 0;
}