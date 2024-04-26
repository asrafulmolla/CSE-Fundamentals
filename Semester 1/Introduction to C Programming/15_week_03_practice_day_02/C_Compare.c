/* Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C */
#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",a,b);
    int n=strcmp(a,b);
    if(n<0)
    {
        printf("%s",a);
    }
    else
    {
        printf("%s",b);
    }

}