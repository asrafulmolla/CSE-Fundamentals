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
    int e;// cloumn number
    scanf("%d",&e);
    for(int i=0;i<n;i++) //column hole row porjonto
    {
        printf("%d \n",a[i][e-1]);//e number cloumn print
    }
}