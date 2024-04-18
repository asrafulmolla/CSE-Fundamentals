#include<stdio.h>
int main()
{
    int n,temp=0;
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(temp<a)
        {
            temp=a;
        }
        else continue;
    }
    printf("%d",temp);
}