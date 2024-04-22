#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    char b[1001];
    scanf("%s",b);
    int s1=0,s2=0;
    for(int i=0;a[i]!=0;i++)
    {
        s1++;
    }
    for(int i=0;b[i]!=0;i++)
    {
        s2++;
    }
    printf("%d %d\n",s1,s2);
    printf("%s %s",a,b);
}