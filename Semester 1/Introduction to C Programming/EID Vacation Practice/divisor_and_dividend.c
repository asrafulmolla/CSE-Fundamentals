#include<stdio.h>
int main()
{
    int d,q,r;
    scanf("%d%d%d",&d,&q,&r);
    for(int i=1;i<d/2;i++)
    {
        if(((i*q)+r)==d)
        {
            printf("%d",i);
        }
    }
}