#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,3,2,2,2,4,4,1,2};
    replace(v.begin(),v.end(),2,100);
    for(int i:v)
    {
        cout<<i<<" ";
    }
}