#include<stdio.h>
long long asraful(int a[],int i,long long sum)
{
    if(i<0) return 0;
    sum=asraful(a,i-1,sum);
    sum+=a[i];
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    long long sum=asraful(a,n-1,0);
    printf("%lld",sum);
}