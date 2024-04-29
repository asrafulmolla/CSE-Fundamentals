// No parameter No Return
#include<stdio.h>

char small_to_capital()
{
    char x,y;
    scanf("%c",&x);
    if(x>='a' && x<='z')
    {
        y=x-32;
    }
    printf("%c",y);
}

int main()
{
    small_to_capital();
}