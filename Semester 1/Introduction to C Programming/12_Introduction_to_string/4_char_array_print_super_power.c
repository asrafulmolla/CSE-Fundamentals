#include<stdio.h>
int main()
{
    //char a[6]={'R','a','h','a','t'}; //no gurantee print perfect
    char a[6]="Rahat"; //gurantee perpect print
    int sz=sizeof(a)/sizeof(char);
    printf("%d\n",sz);
    printf("%s",a);
}