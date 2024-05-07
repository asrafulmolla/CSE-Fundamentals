#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    int cnt=0;
    int value=n*m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            {
                cnt++;
            }
        }
    }
    if(cnt==value) printf("Zero matrix or null matrix\n");
    else printf("Not a zero matrix\n");
    
}