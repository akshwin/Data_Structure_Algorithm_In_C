#include<stdio.h>

int main()
{
    int i;
    char A[] = "wELCOMEhOME";
    for( i = 0 ; A[i]!='\0' ; i++)
    {
        if( A[i]>65 && A[i]<=90)
        {
            A[i] = A[i] +32;
        }
        else if (A[i]>97 && A[i]<122)
        {
            A[i] = A[i] -32;
        }
    }
    printf("%s",A);
    return 0;
}