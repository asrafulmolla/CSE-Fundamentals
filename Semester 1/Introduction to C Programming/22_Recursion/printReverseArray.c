#include<stdio.h>
void array(int a[],int n,int i)
{
    if(i==-1) return; //base case
    printf("%d ",a[i]);
    array(a,n,i-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    array(a,n,n-1);
}