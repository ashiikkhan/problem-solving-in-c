#include<stdio.h>
int main ()
{
    int row=3, col=3;
    int arr[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    //check if it is diagonal or not:
    int flag=1; //which means true > diagonal;
    if(row==col)
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(i==j)
                {
                    continue;
                }
                if(arr[i][j]!=0)
                {
                    flag=0;
                }
            }
        }
    }
    else 
    {
        flag=0;
    }

    if(flag==1)
    {
        printf("diagonal matrix");
    } 
    else 
    {
        printf("not diagonal matrix");
    }

    return 0;
}