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
    int check=0;
    if(n!=m)
    {
        check=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j)
            {
                if(a[0][0]!=a[i][j])
                {
                    check=1;
                }
            }
            else if(a[i][j]!=0)
            {
                check=1;
            }
        }
    }
    if(check==0) printf("Scalar matrix\n");
    else printf("Not a Scalar matrix\n");
    
}