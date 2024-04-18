#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i+=2)
    {
        if(i+(i+2)+(i+4)+(i+6)+(i+8)==n)
        {
            printf("%d %d %d %d %d",i,(i+2),(i+4),(i+6),(i+8));
        }
    }
}