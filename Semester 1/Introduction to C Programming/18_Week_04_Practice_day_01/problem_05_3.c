// No parameter Yes Return
#include<stdio.h>

char  capital_to_small()
{
    char c,y;
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    {
        y=c+32;
    }
    return y;
}

int main()
{
    char a=capital_to_small();
    printf("%c",a);
}