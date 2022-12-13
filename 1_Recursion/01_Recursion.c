#include<stdio.h>

int fun(int n)
{
    if(n>0)
    {
        printf("%d",n);
        fun(n-1);
    }
}
int main()
{
    fun(5);
    return 0;
}