#include<stdio.h>

struct Array 
{
    int A[20];
    int size;
    int length;
};

void swap(int *x , int *y)
{
    int temp;
    temp = *x ;
    *x = *y; 
    *y = temp;
}

void Display(struct Array arr)
{
    for( int i = 0 ; i < arr.length ; i++)
    {
        printf("%d ",arr.A[i]);
    }
}
void Reverse (struct Array *arr)
{
    int i, j;
    for ( i =0 , j= arr->length-1 ; i<j ;i++,j-- )
    {
        swap(&arr->A[i],&arr->A[j]);
    }
}

int main()
{
    struct Array arr = {{2,3,4,5,6},10,5};
    Reverse(&arr);
    Display(arr);
    return 0;
}