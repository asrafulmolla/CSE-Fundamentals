#include<stdio.h>
int main()
{
    int x=100;
    int *ptr=&x;
    x=200; //or *ptr=200; same kotha
    // x -> *ptr
    printf("X er Value: %d\n",*ptr); //dereference
    printf("X er Value: %d\n",x);
    
}