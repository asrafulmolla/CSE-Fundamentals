/* Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F */
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[101];
        scanf("%s",a);
        if(strlen(a)<=10)
        {
            printf("%s\n",a);
        }
        else
        {
            printf("%c%d%c\n",a[0],strlen(a)-2,a[strlen(a)-1]);
        }
    }
}