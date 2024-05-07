#include<stdio.h>
long long int asraful(int n)
{
    if(n==0)
    {
        return 1;
    }
    long long int ans=asraful((n-1));
    return n*ans;
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int ans=asraful(n);
    printf("%lld",ans);
}