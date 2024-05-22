// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            cnt=1;
            break;
        }
        i++;
        j--;
    }
    if(cnt==0) cout<<"YES\n";
    else cout<<"NO\n";
}