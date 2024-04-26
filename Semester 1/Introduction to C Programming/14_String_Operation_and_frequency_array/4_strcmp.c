#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    char b[101];
    scanf("%s %s",a,b);
    int v= strcmp(a,b);
    if(v>0)
    {
        printf("A is big");
    }
    else if(v<0)
    {
        printf("B is Big");
    }
    else
    {
        printf("A and B are same.");
    }
}
// a is big output>0
// b is big output<0
// a == b output=0