#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],cnt=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
            a[i]=1;
        }
        else if(a[i]<0)
        {
            a[i]=2;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}