#include<stdio.h>
void fun(int i)
{
    printf("%d\n",i);
    if(i==5) //recursion concrol// base case
    {
        return;
    }
    fun(i+1); //recursion call
}

int main()
{
    fun(1);
}