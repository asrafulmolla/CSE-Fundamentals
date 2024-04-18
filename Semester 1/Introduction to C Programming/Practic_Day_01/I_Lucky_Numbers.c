#include<stdio.h>
int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    int rem=0,result=0;
    rem=n%10;
    result=n/10;
    if(rem%result==0 || result%rem==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}