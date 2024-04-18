#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x/4;i++)
    {
        if(i+i*4==x)
        {
            printf("%d %d",i*4,i);
        }
    }
}