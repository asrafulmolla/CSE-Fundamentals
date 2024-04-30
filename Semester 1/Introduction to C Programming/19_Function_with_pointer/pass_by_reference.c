#include<stdio.h>
void fun(int *p)
{
    *p=100;  //memory te update hoye jabe value so main & fun funtion e change hoye jabe 
    printf("fun x er address: %p\n",p);
    printf("%d\n",*p);
}  
int main()
{
    int x=10;
    printf("Main x er address: %p\n",&x);
    fun(&x);
    printf("%d\n",x);
}