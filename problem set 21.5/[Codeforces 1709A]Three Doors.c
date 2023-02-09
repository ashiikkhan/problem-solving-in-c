/**
 * Problem link: https://codeforces.com/problemset/problem/1709/A
 * 
 * hidden_keys[k]!=0 that means if the key you have in your hand open the lock it can and then not find 0 that means you have got another key and take the key and check again by opening another lock with the key if you not get 0 that means you get another key which is the last key and one more door will remain locked and that lock must be opened with that key....
*/
#include<stdio.h>
#define NUM_OF_DOORS 3
int can_open_all_doors();
int main ()
{
    int t; //test case
    scanf("%d", &t);
    int ans_arr[t];
    int i=0;
    while(i<t)
    {
        int ans = can_open_all_doors();
        ans_arr[i]=ans;
        i++;
    }
    for(int i=0; i<t; i++)
    {
        if(ans_arr[i]==1)
            printf("YES\n");
        else 
            printf("NO\n");
    }
    return 0;
}
int can_open_all_doors()
{
    int key; //the key you have in your hand.
    scanf("%d", &key);
    int hidden_keys[NUM_OF_DOORS];
    for(int i=0; i<NUM_OF_DOORS; i++)
    {
        scanf("%d", &hidden_keys[i]);
    }
    int opened_doors=0;
    for(int i=0; i<NUM_OF_DOORS; i++)
    {
        if(hidden_keys[key-1]!=0)
        {
            opened_doors++;
            key=hidden_keys[key-1];
        }
    }
    if(opened_doors==2)
        return 1;
    else 
        return 0;
}