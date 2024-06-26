// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    while(t--)
    {
        int x;
        cin>>x;
        int beg=0,end=n-1;
        while(beg<=end)
        {
            int mid=(beg+end)/2;
            if(a[mid]<x)
            {
                beg=mid+1;
            }
            else if(a[mid]==x)
            {
                cout<<"found\n";
                break;
            }
            else 
            {
                end=mid-1;
            }
        }
        if(beg>end)
            {
                cout<<"not found\n";
            }
    }
    
}