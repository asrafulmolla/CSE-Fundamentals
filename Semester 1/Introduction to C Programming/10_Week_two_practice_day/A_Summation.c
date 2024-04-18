#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    if(sum<0)
    {
        printf("%lld",sum*(-1));
    }
    else 
    {
        printf("%lld",sum);
    }
}