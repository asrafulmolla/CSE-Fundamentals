#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///*******Method 01 ********* */
    // vector<int>v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }

    ///*******Method 02 ********* */
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i:v)
    {
        cout<<i<<" ";
    }
}