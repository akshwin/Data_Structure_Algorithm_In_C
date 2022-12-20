#include<stdio.h>

struct Array 
{
    int A[20];
    int size;
    int length;
};

void append(struct Array *arr , int x)
{
    if(arr->length<arr->size)
        arr->A[arr->length++] = x;
}

void Insert(struct Array *arr , int index , int x)
{
    if(index >= 0 && index <= arr->length)
    {
        for( int i = arr->length ; i>index ; i--)
        {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }

}

void Display(struct Array arr)
{
    for ( int i = 0 ; i < arr.length ; i ++)
    {
        printf("%d ",arr.A[i]);
    }
}


int main()
{
    struct Array arr = {{1,2,3,4,5,6},10,6};

    Display(arr);
    printf("\n");
    append(&arr,5);
    Display(arr);
    printf("\n");
    Insert(&arr,5,10);
    Display(arr);

    return 0;
}