/*
jodi amar kache 100 tk ba tar beshi tk thake tahole ami
burger khabo jodi 50 tk beshi thake fuska khabo jodi
20 tk thake ice cream khabo nahole khabo na. */
#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=100)
    {
        printf("Burger khabo");
    }
    else if(tk>=50)
    {
        printf("Fuska khabo");
    }
    else if(tk>=20)
    {
        printf("Ice cream khabo");
    }
    else
    {
        printf("Burger khabo na");
    }
}