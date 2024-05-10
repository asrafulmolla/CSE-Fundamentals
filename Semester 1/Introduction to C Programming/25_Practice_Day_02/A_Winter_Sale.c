#include<stdio.h>
int main()
{
    float x,p;
    scanf("%f%f",&x,&p);
    float a=p/(1-(x/100));
    printf("%.2f",a);
}