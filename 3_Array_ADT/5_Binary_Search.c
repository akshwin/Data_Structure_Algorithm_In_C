#include<stdio.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

int B_Search(int A[] ,int low , int high ,int key)
{
    
    int flag = 0;

    if(low<=high)
    {
        int mid = (low+high)/2;
        if(key == A[mid])
            return A[mid];
        else if (key<A[mid])
        {
            return B_Search(A , low , mid , key);
        }
        else
        {
            return B_Search(A ,mid+1 , high , key);
        } 
    }   
    return -1;    
}

int main()
{
    struct Array arr = {{1,2,3,4,5,6,7,8,9},10,9};
    printf("%d",B_Search(arr.A,0,arr.length,44));
    return 0;
}