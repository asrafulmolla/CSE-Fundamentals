/*Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M */
#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int min=INT_MAX;
    int max=INT_MIN;
    int index1=0,index2=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            index1=i;
        }
    }
    //printf("%d",min);
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            index2=i;
        }
    }
    //int temp=a[]
    //printf("%d",index2);
    int temp=a[index1];
    a[index1]=a[index2];
    a[index2]=temp;
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}