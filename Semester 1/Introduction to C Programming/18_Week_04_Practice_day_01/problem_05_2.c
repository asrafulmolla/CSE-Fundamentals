// Yes parameter no Return
#include<stdio.h>

char  capital_to_small(char x)
{
    char y;
    if(x>='A' && x<='Z')
    {
        y=x+32;
    }
    printf("%c",y);
}

int main()
{
    char c;
    scanf("%c",&c);
    char a=capital_to_small(c);
}