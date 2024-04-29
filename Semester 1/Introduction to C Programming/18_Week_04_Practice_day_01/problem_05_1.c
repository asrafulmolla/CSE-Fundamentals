// Yes parameter Yes Return
#include<stdio.h>

char  capital_to_small(char x)
{
    char y;
    if(x>='A' && x<='Z')
    {
        y=x+32;
    }
    return y;
}

int main()
{
    char c;
    scanf("%c",&c);
    char a=capital_to_small(c);
    printf("%c",a);
}