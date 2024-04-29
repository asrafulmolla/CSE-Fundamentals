// No parameter Yes Return
#include<stdio.h>

char small_to_capital()
{
    char x,y;
    scanf("%c",&x);
    if(x>='a' && x<='z')
    {
        y=x-32;
    }
    return y;
}

int main()
{
    char c= small_to_capital();
    printf("%c",c);
}