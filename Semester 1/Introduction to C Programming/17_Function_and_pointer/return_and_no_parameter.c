#include<stdio.h>
int add()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int sum=x+y;
    return sum;
}

int main()
{
    int x=add();
    printf("%d",x);
}