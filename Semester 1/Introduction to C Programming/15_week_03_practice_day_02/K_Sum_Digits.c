/* Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K */
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i]-'0';
    }
    printf("%d",sum);
}