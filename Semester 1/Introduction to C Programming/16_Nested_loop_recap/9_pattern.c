#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=k;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
        k--;
    }
}

/*
5

5 5 5 5 5
4 4 4 4
3 3 3
2 2
1
*/