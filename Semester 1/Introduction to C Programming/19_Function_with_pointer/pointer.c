#include<stdio.h>
int main()
{
    int x=100;
    int *ptr=&x;
    printf("X er Address: %p\n",&x); //same ptr
    printf("X er Address: %p\n",ptr);
    printf("ptr er Address: %p\n",&ptr);
}