/*
Problem: 
Mr. A has a grid that has N rows and M columns. Eash row is numbered from 1 to N
from top to bottom. Each column is numbered from 1 to M from right to left. 
Each tile in the grid contains a number. The numbers are arranged as follows: 
Row 1 contains integers from 1 to M left to right. 
Row 2 contains integers from M+1 to 2*M left to right. 
Row 3 contains integers from 2*M+1 to 3*M left to right. 
Ans so on until row N.

A domino is defined as two different tiles in the grid that touch by their sides. 
A domino is said to be tight if and only if the two numbers in the domino have a
difference of exactly 1. Count the number of distinct tight dominos in the grid. 

Two dominoes are said to be distinct if and only if there exists at least one tile
that is in one domino, but not in the other. 

The range of the M,N => 1-100

solution hints: 
1. matrix related problem 
*/


#include <stdio.h>
int main () 
{
    int n, m, tight_dominoes; 
    scanf("%d%d", &n, &m);

    if(n==1 && m==1)
        tight_dominoes=0;
    else if(n==1 && m>1)
        tight_dominoes=m-1;
    else if(n>1 && m==1)
        tight_dominoes=n-1;
    else 
        tight_dominoes=(m-1)*n;

    printf("%d", tight_dominoes);
    
    return 0;
}