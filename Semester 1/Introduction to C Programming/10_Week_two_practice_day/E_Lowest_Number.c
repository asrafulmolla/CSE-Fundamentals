#include<stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=INT_MAX;
    int a[n],b[1]={m};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(b[0]>a[i])
        {
            b[0]=a[i];
        }
    }
    printf("%d ",b[0]);
    int min=b[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]==min)
        {
            printf("%d",i+1);
            break;
        }
    }

}