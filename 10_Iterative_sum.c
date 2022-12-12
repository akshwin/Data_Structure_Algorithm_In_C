#include<stdio.h>

int sum(int n)
{
   int sum = 0;
   for ( int i = 1 ; i <=n ;i++)
   {
    sum = sum+i;
   }
   return sum;

}
int main()
{
    printf("%d",sum(4));
    return 0;
}