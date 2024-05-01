// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B
// no parameter no return
#include<stdio.h>
void asraful()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d",i);
        if(i<n)
        {
            printf(" ");
        }
    }
}

int main()
{
    asraful();
}