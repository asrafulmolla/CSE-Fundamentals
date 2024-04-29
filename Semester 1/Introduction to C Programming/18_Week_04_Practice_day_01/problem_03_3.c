//no paratemeter and yes return
#include<stdio.h>
#include<string.h>

int char_to_ascii()
{
    char x;
    scanf("%c",&x);
    int result=x;
    return result;
}
int main()
{   int a=char_to_ascii();
    printf("%d",a);
}