/*
fibonacci series print withour array; 
*/
int main () 
{
    int n, i; 
    scanf("%d", &n);

    int t1=0;
    int t2=1; 
    printf("%d %d ", t1, t2);
    int next_term=t1+t2;
    while (next_term<=n)
    {
        printf("%d ", next_term);
        t1=t2;
        t2=next_term;
        next_term=t1+t2;
    }
    
    return 0;
}