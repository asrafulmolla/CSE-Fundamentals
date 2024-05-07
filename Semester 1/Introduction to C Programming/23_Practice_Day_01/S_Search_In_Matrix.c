#include<stdio.h>
#include<math.h>
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
    int num,cnt=0;
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==num)
            {
                cnt=1;
                break;
            }
        }
    }
    if(cnt==0) printf("will take number");
    else printf("will not take number");
}