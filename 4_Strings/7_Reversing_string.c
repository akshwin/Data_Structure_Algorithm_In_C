#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i;
    char A[] = "Python";
    int length = strlen(A);
    for ( i=length ; i>=0 ;i--)
    {
        printf("%c",A[i]);
    }
    return 0;
}