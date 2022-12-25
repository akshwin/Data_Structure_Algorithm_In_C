#include<stdio.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

int Get(struct Array arr , int index)
{
    if(index>=0 && index<arr.length)
        return arr.A[index];
    return -1;
}

void Set(struct Array arr , int index , int x)
{
    if(index >=0 && index<arr.length)
    {
        arr.A[index] = x;
    }
}

int Max(struct Array arr)
{
    int max = arr.A[0];
    for( int i = 0 ; i<arr.length ; i++)
    {
        if(arr.A[i]>max)
        {
            max = arr.A[i];
        }
    }
    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];
    for( int i = 0 ; i<arr.length ; i++)
    {
        if(arr.A[i]<min)
        {
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct Array arr)
{
    int s =  0;
    for( int i = 0  ; i < arr.length ; i++)
    {
        s = s+arr.A[i];
    }
    return s;
}

float Avg(struct Array arr)
{
    return (float)Sum(arr)/arr.length;
}

int main()
{
    struct Array arr ={{1,2,3,4,5,6},10,6};
    
    printf("%d",Max(arr));
    printf("%d",Min(arr));
    printf("%d",Sum(arr));
    printf("%d",Avg(arr));


    return 0;
}