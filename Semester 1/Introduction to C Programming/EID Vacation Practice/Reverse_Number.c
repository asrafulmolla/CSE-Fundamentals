#include<stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    for(int i=1;i<=4;i++)
    {
        temp=n%10;
        n=n/10;
        printf("%d",temp);
    }
}