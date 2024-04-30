#include<stdio.h>
int main()
{
    double x=5.26;
    double *ptr=&x;
    double *ptr2=ptr;
    *ptr2=10.25;
    printf("X er value: %.2lf\n",x);
    printf("X er value: %.2lf\n",*ptr2);
    //printf("ptr er size: %d\n",sizeof(ptr));
}