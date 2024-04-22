#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int c[m+n];
    for(int i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    int i=n;
    for(int j=0;j<m;j++,i++)
    {
        c[i]=b[j];
    }
    for(int i=0;i<n+m;i++)
    {
        printf("%d ",c[i]);
    }

}