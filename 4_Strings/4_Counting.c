#include<stdio.h>

int main()
{
    int i;
    int count = 0;
    char A[] = "Welcome";
    for ( i = 0 ; A[i]!='\0';i++)
    {
        count ++;
    }
    printf("%d",count);
    return 0;
}