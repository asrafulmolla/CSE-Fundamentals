#include<stdio.h>
int main()
{
    int n,pos=0,neg=0,odd=0,even=0;
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>0) pos++;
        if(a<0) neg++;
        if(a%2==0) even++;
        if(a%2!=0) odd++;
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);
}