#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int avg=x-y;
    int per=avg/2;
    printf("%d %d",per+y,per);
}