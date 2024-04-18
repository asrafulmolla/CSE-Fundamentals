#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        do
        {
            int rem=0,temp=0;
            rem=n%10;
            n/=10;
            printf("%d ",rem);
        }
        while (n!=0);
        printf("\n");
    }
    
}