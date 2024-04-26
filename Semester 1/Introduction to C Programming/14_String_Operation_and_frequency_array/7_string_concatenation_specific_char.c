#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    char b[101];
    scanf("%s %s",a,b);
    int k=strlen(a);
    for(int i=0;i<=2;i++)
    {
        a[k]=b[i]; //a[strlen(a)]=b[i];
        k++;
    }
    a[k]='\0';
    printf("%s",a);
}