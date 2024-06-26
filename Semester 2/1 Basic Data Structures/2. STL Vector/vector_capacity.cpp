#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>v;
    // cout<<v.size()<<endl;
    // cout<<v.max_size()<<endl;
    // cout<<v.capacity()<<endl;
    // v.push_back(100);
    // cout<<v.capacity()<<endl;
    // v.push_back(10);
    // cout<<v.capacity()<<endl;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    vector<int>v={1,2,3,4};
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.resize(6);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.resize(8,100);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}