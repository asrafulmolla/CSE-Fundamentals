#include<stdio.h>
void asraful(int n)
{
    if(n==0) return;
    printf("I love Recursion\n");
    asraful(--n);
}
int main()
{
    int n;
    scanf("%d",&n);
    asraful(n);
}