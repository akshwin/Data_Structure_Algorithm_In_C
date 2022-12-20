#include<stdio.h>
#include<stdlib.h>

struct Array 
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    for ( int i = 0 ; i < arr.length ; i ++)
    {
        printf("%d ",arr.A[i]);
    }
}

int Delete(struct Array *arr , int index)
{
    int x  = 0 ;
    if( index >=0 && index <arr->length-1)
    {
        x = arr->A[index];
        for( int i = index ; i <arr->length-1 ; i++)
        {
            arr->A[i] = arr->A[i+1];
            arr->length--;
        }
        return x;
    }
    return 0;
}

int main()
{
    struct Array arr = {{1,2,3,4,5,6},10,6};

    Display(arr);
    printf("\n");
    printf("%d",Delete(&arr,4));
    printf("\n");
    Display(arr);
    return 0;
}