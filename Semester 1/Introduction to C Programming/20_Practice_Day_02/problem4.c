#include<stdio.h>
void swap_it(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    swap_it(&n,&m);
    printf("%d %d",n,m);
    
}