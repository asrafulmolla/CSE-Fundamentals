#include<stdio.h>
int main()
{
    int n,k=1;
    scanf("%d",&n);
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=i;j>0;j--)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("* ");
        }
        printf("\n");
        k++;
    }
}

/*

*
* *
* * *
* * * *
* * * * *

*/