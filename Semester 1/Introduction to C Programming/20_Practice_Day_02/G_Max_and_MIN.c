// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G
// no parameter no return
#include<stdio.h>
void asraful()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%d",a[0]);
    printf(" ");
    printf("%d",a[n-1]);
}

int main()
{
    asraful();
}