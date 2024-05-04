#include<stdio.h>
void fun()
{
    printf("Fun\n");
    fun(); //infinite print hoye geche
}
int main()
{
    fun();
}