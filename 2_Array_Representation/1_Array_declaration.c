#include<stdio.h>

int main()
{
    int A[5];
    int B[5] = {1,2,3,4,5};
    int C[10] ={1,2,3,4,5};
    int D[5] = {0};
    int E[] = { 1,2,3,4,5};

    for( int i = 0 ; i <=5 ; i++)
    {
        printf("%u \n",&A[i]);
    }

    
    return 0;
}