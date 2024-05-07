#include<stdio.h>
void fun(int i)
{
    if(i==6) //recursion concrol// base case
    {
        return;
    }
    printf("%d\n",i);
    fun(i+1); //recursion call
}

int main()
{
    fun(1);
}