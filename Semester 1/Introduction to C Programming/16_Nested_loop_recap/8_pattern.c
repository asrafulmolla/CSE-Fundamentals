#include<stdio.h>
int main()
{
    int n,k=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
        k++;
    }
}

/*
5

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/