#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int e;// row number
    scanf("%d",&e);
    for(int i=0;i<m;i++) // row hole cloumn porjonto loop calate hobe
    {
        printf("%d ",a[e-1][i]);//e number row print
    }
}