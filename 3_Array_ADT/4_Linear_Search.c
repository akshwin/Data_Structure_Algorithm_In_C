#include<stdio.h>

struct Array 
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    for( int  i = 0 ; i < arr.length ; i++)
    {
        printf("%d",arr.A[i]);
    }
}

int LSearch(struct Array arr , int key)
{
    for( int i = 0 ; i < arr.length ; i++)
    {
        if(key == arr.A[i])
        {
            return i;
        }
    }
    return -1;

}

int main()
{
    struct Array arr = {{1,2,3,4,5},10,5};
    int x = LSearch(arr,4);
    printf("%d",x);
    
    return 0;
}