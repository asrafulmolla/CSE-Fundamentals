#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    char b[1001];
    scanf("%s",b);
    int s1=0,s2=0;
    s1=strlen(a);
    s2=strlen(b);
    printf("%d %d\n",s1,s2);
    printf("%s %s",a,b);
}