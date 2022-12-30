#include<stdio.h>

int main()
{
    int i;
    char A[] = "WELCOME";
    for( i = 0 ; A[i]!='\0' ; i++)
    {
        A[i] = A[i]+32;
    }
    printf("%s",A);
    return 0;
}