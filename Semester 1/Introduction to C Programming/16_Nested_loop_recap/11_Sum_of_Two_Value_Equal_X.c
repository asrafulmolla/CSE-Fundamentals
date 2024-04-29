#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,y,z;
    int c=0;
    scanf("%d",&x);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==x)
            {
                printf("Possible.\n");
                printf("%d + %d = %d",a[i],a[j],a[i]+a[j]);
                c++;
                break;
            }
        }
    }
    if(c==0)
    {
        printf("Possible na");
    }
}