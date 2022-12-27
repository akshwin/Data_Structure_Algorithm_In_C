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

void InsertSort(struct Array *arr , int x)
{
    int i = arr->length-1;
    if(arr->length == arr->size)
        return;
    while(i>=0 && arr->A[i]>x)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
    
}

int main()
{
    struct Array arr = {{2,3,5,10,15},10,5};
    Display(arr);
    printf("\n");
    InsertSort(&arr,12);
    printf("\n");
    Display(arr);

    return 0;
}