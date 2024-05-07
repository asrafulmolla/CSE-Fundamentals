#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001],b[1001];
    scanf("%s",a);
    strcpy(b,a);
    int i=0,j=strlen(a)-1;
    int cnt=1;
    while(i<j)
    {
            if(a[i]!=a[j])
            {
                cnt=0;
                break;
            }
            i++;
            j--;
    }
    if(cnt==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}