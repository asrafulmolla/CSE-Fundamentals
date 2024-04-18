#include<stdio.h>
int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        if(i%2==0){
            cnt++;
            printf("%d\n",i);
        }
    }
    if(cnt==0) printf("-1");
}