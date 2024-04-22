#include<stdio.h>
#include<string.h>
int main()
{
    int cnt=0;
    char a[100];
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        cnt++;
    }
    printf("%d",cnt);
}