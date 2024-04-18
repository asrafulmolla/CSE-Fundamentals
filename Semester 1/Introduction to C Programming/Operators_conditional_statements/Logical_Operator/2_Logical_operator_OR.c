#include<stdio.h>
int main()
{
    int a=10,b=20,c=100,d=200;
    printf("%d\n",a<b || c>d);
    printf("%d\n",a<b || c<d);
    printf("%d",a>=b || c==d);
}

// True = 1
// False = 0