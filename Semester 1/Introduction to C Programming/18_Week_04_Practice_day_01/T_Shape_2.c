//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=1;
    int s=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        s--;
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        k+=2;
        printf("\n");
    }
}