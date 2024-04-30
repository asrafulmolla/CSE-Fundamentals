#include<stdio.h>
void fun(int x)
{
    x=100;
    printf("fun x er address: %p\n",&x);
    printf("%d\n",x);
}
int main()
{
    int x=10;
    printf("Main x er address: %p\n",&x);
    fun(x); //value pass variable pass hoy na
    printf("%d\n",x);
}