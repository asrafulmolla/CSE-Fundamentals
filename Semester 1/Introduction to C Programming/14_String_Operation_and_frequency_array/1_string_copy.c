#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    char b[101];
    scanf("%s %s",a,b);
    for(int i=0;i<=strlen(b);i++)
    {
        a[i]=b[i];
    }
    printf("%s",a);
}