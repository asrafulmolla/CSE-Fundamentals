#include<stdio.h>
#define ll long long
int main()
{
    long long int n,sum=0;
    scanf("%lld",&n);
    for(ll i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("%lld",sum);
}