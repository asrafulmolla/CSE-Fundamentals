#include<stdio.h>
void asraful(int n)
{
    if(n==0) return 0;
    int rem=n%10;
    asraful(n/10);
    printf("%d ",rem);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        asraful(n);
        if(n==0) printf("0");
        printf("\n");
    }
    
}