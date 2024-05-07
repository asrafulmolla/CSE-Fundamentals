#include<stdio.h>
#include <limits.h>
int asraful(int a[],int n,int i)
{
    if(i==n) return INT_MIN;
    int max= asraful(a,n,i+1);
    if(max<a[i])
    {
        return a[i];
    }
    else
    {
        return max;
    }
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
    int res=asraful(a,n,0);
    printf("%d",res);
}