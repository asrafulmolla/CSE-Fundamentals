//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=n;
    int s=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=k;j>=1;j--)
        {
            printf("*");
        }
        k--;
        printf("\n");
    }
}