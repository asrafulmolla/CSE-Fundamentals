#include<stdio.h>
#include<string.h>
void fun(char *a)
{
    printf("%d\n",strlen(a));
    printf("%s\n",a);
}
int main()
{
    char a[20]="Hello";
    fun(a);
}