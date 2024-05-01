#include<stdio.h>
#include<stdlib.h>
int my_abs(int x)
{
    int result=abs(x);
    return result;
}

int main()
{
    int x;
    scanf("%d",&x);
    int result=my_abs(x);
    printf("%d",result);
}