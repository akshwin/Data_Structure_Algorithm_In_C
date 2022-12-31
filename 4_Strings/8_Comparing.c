#include<stdio.h>

int main()
{
    int i , j;
    char A[] = "Painter";
    char B[] = "Painter";

for ( int i = 0 ,j=0 ; A[i]!='\0'&&B[j]!='\0';i++,j++)
    {
        if(A[i] != B[j])
            break;
    }
    if(A[i] == B[j])
    {
        printf("Equal");
    }
    else if (A[i]<B[j])
    {
        printf("Smaller");
    }
    else
    {
        printf("Greater");
    }
    
    return 0;
}