#include<stdio.h>
#include<string.h>

int fun(char a[],int i)
{
    if(a[i]=='\0') return i;
    fun(a,i+1);
}
int main()
{
    char a[1001];
    scanf("%s",a);
    fun(a,0);
    printf("%d",fun(a,0));
}