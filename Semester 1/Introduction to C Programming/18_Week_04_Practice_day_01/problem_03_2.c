//yes paratemeter and no return
#include<stdio.h>
#include<string.h>

int char_to_ascii(char a)
{
    int result=a;
    printf("%d",result);
}
int main()
{
    char x;
    scanf("%c",&x);
    char_to_ascii(x);
}