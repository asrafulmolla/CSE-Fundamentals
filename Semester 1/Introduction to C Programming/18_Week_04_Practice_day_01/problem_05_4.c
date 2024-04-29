// No parameter No Return
#include<stdio.h>

void  capital_to_small()
{
    char c,y;
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    {
        y=c+32;
    }
    printf("%c",y);
}

int main()
{
    capital_to_small();
}