#include<stdio.h>

int valid(char * name)
{
    int i;
    for( i = 0 ; name[i]!='\0';i++)
    {
        if((! name[i]>=65 &&name[i]<=90) && (!name[i]>=97 &&name[i]<=122))
            return 0;
    }
    return 1;
}
int main()
{
    char *name ="Akshwin";
    if(valid(name))
    {
        printf("Valid string");
    }
    else
    {
        printf("Invalid string");
    }
    return 0;
}