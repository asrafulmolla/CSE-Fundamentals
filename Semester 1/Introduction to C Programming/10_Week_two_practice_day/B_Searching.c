#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],cnt=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int key;
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("%d",i);
            cnt++;
            break;
        }
    }
    if(cnt==0)
    {
        printf("-1");
    }
}