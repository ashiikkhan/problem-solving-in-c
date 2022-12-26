/*
Problem: 
The PH Headquarter has N floors, called the 1st floor through the N-th floor. 
Each floor has K rooms, called the 1st room through the K-th room.
Here, both N and K are one-digit integers, and the j-th room of the i-th floor 
has the room number i0j.
So let's find the sum of the room numbers, where each room number is seen as a 
three digit integer. Find the sum. 
*/

#include<stdio.h>
int main () 
{
    int N, K, i, next_room=101, next_floor=2, ans=0; 
    scanf("%d%d",&N, &K);

    for(i=1; i<=(N*K); i++)
    {
        ans+=next_room;
        next_room+=1;
        
        if(i%K==0)
        {
            next_room=(100*next_floor)+1;
            next_floor+=1;
        }
    }
    printf("%d", ans);
    return 0;
}