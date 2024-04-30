#include<stdio.h>
void fun(char *a)
{
    a[0]='G';

}

int main()
{
    char a[]="Hello";
    fun(a);
    printf("%s ",a);
}