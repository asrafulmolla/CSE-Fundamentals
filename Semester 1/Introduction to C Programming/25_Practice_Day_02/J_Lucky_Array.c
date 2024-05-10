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
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[0]>a[i])
        {
            int temp=a[0];
            a[0]=a[i];
            a[i]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[0]==a[i])
        {
            cnt++;
        }
    }
    if(cnt%2==0) printf("Unlucky");
    else printf("Lucky");
}