#include<stdio.h>
#include<string.h>
int main()
{
    char a[101]="apple";
    char b[101]="orange";
    strcpy(a,b);
    printf("%s",a);
    
}