#include<stdio.h>

struct Array 
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    for ( int i = 0 ; i < arr.length ;i++)
    {
        printf("%d ",arr.A[i]);
    }
}

int isSorted(struct Array arr)
{
    for( int i = 0 ; i < arr.length-1 ;i++)
    {
        if(arr.A[i]>arr.A[i+1])
            return 0;
    }
    return 1;
}

int main()
{
    struct Array arr = {{2,3,5,10,15},10,5};
    int x = isSorted(arr);
    printf("%d",x);
    return 0;
}