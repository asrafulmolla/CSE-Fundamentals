#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    fgets(a,10,stdin);
    printf("%s",a);
}