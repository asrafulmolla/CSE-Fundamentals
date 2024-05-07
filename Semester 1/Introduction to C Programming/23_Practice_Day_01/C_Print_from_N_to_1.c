#include<stdio.h>
void asraful(int n)
{
    if(n==0) return;
    printf("%d",n);
    if(n!=1)
        printf(" ");
    asraful(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    asraful(n);
}