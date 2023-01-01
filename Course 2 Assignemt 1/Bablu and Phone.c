#include<stdio.h>
int main () 
{
    int T; 
    scanf("%d", &T);

    int charges[T];
    for(int i=0; i<T; i++)
    {
        int X;
        char c; 
        scanf("%d%c", &X,&c);
        charges[i]=X;
    }

    int mins[T];
    for(int i=0; i<T; i++)
    {
        if( charges[i]>=80 && charges[i]<=100)
        {
            mins[i]=(100-charges[i])*3;
        } 
        else if(charges[i]>=60 && charges[i]<80)
        {
            mins[i]=((100-80)*3) + ((80-charges[i])*2); 
        } 
        else if(charges[i]>=0 && charges[i]<60)
        {
            mins[i]=((100-80)*3) + ((80-60)*2 ) + ((60-charges[i]) * 1); 
        }
    }

    for(int i=0; i<T; i++)
    {
        printf("%d minutes\n", mins[i]);
    }

    return 0;
}