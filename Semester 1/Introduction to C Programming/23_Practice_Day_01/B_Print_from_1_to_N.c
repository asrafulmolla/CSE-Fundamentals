#include<stdio.h>
void asraful(int n)
{
    if(n==0) return;
    asraful(n-1);
    printf("%d\n",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    asraful(n);
}