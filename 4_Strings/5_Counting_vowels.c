#include<stdio.h>

int main()
{
    int i;
    int count = 0;
    char A[] = "Welcome to home";
    for ( i = 0 ; A[i]!='\0';i++)
    {
        if(A[i] == 'a' ||A[i] == 'e'||A[i] == 'i'||A[i] == 'o'||A[i] == 'u'||A[i] == 'A' || A[i] == 'E'||A[i] == 'I'||A[i] == 'O'|| A[i] == 'U')
        count ++;
    }
    printf("%d",count);
    return 0;
}