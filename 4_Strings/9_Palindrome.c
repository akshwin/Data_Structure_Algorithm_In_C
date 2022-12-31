#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i;
    char A[] = "Madam";
    char B[100];
    int length = strlen(A);

    for ( i=length ; i>=0 ;i--)
    {
        B[i] = A[i];
    }

    for (i = 0 ; B[i]!=0 ;i++)
    {
        printf("%c",B[i]);
    }
    return 0;
}