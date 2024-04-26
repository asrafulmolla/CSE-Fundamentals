#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    char b[101];
    scanf("%s %s",a,b);
    strcat(a,b);
    printf("%s",a);
}