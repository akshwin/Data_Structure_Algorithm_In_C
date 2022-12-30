#include<stdio.h>

int main()
{
    int i;
    int count = 0;
    int w_count = 1;
    char A[] = "Welcome to home";
    for ( i = 0 ; A[i]!='\0';i++)
    {
        count ++;
        if(A[i] == ' ')
        {
            w_count++;
        }
    }
    
    printf("%d\n",count);
    printf("%d",w_count);
    return 0;
}