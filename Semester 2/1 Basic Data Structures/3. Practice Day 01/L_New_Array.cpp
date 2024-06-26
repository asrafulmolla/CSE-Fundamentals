#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>c(n*2);
    int k=n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        c[k]=a[i];
        k++;
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        c[i]=b[i];
    }
    for(int i:c)
    {
        cout<<i<<" ";
    }

}