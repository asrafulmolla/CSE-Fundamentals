// Yes parameter Yes Return
#include<stdio.h>

char small_to_capital(char x)
{
    char y;
    if(x>='a' && x<='z')
    {
        y=x-32;
    }
    return y;
}

int main()
{
    char a;
    scanf("%c",&a);
    char result=small_to_capital(a);
    printf("%c",result);
}