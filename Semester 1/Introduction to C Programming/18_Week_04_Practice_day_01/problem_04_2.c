// Yes parameter no Return
#include<stdio.h>

char small_to_capital(char x)
{
    char y;
    if(x>='a' && x<='z')
    {
        y=x-32;
    }
    printf("%c",y);
}

int main()
{
    char a;
    scanf("%c",&a);
    small_to_capital(a);
}