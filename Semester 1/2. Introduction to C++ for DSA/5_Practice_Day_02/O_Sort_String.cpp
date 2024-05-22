// proble link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c;
    int cnt[26]={0};
    while(cin>>c)
    {
        cnt[c-'a']++;
    }
    for(char i='a';i<='z';i++)
    {
        if(cnt[i-'a']>0)
        {
            for(int j=1;j<=(cnt[i-'a']);j++)
            {
                cout<<i;
            }
        }
    }
}