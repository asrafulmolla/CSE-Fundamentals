// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mx=INT_MIN,mn=INT_MAX;
    mx=max({a,b,c});// using max function
    mn=min({a,b,c});// using min function
    cout<<mn<<" "<<mx;
}