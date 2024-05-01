#include<stdio.h>
#include<string.h>
int my_len(char x[])
{
    int cnt=0;
    //cnt=strlen(x);
    for(int i=0;x[i]!='\0';i++)
    {
        cnt++;
    }
    return cnt;
}

int main()
{
    char a[1001];
    scanf("%s",a);
    int result=my_len(a);
    printf("%d",result);
}