#include<stdio.h>

struct Array 
{
    int A[20];
    int size;
    int length;
};


void Display(struct Array arr)
{
    for ( int i = 0 ; i < arr.length ; i ++)
    {
        printf("%d",arr.A[i]);
    }
}

int main()
{
    struct Array arr = {{1,2,3,4,5,6},10,6};

    Display(arr);
    

    return 0;
}