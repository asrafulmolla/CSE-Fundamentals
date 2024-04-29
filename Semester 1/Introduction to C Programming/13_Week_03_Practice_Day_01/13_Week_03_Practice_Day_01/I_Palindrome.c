/* Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I */
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001],b[1001];
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++)
    {
        b[i]=a[i];
    }
    //b=a;
    int i=0,j=strlen(a)-1;
    while(i<j)
    {
        int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
    }
    int cnt=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==b[i])
    {
        continue;
    }
    else
    {
        cnt++;
        printf("NO");
        break;
    }
    }
    if(cnt==0)
    {
        printf("YES");
    }
    
    //printf("%s",b);
}