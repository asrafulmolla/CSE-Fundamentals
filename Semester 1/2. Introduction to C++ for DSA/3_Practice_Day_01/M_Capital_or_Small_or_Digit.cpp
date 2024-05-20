// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    cin>>s;
    if('0' <= s && '9'>=s)
    {
        cout<<"IS DIGIT";
    }
    else if('A' <= s && 'Z'>=s)
    {
        cout<<"ALPHA\nIS CAPITAL";
    }
    else 
    {
        cout<<"ALPHA\nIS SMALL";
    }
}