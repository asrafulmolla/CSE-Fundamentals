#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    int x=a;
    if(a=='z')
    {
        printf("a");
    }
    else
    {
        printf("%c",x+1);
    }
}