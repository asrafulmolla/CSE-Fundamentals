// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,d;
    char c,e;
    cin>>a>>c>>b>>e>>d;
    if(c=='+')
    {
        if(a+b==d) cout<<"Yes";
        else cout<<a+b;
    }
    else if(c=='-')
    {
        if(a-b==d) cout<<"Yes";
        else cout<<a-b;
    }
    else if(c=='*')
    {
        if(a*b==d) cout<<"Yes";
        else cout<<a*b;
    }
}