#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>x={1,2,3,4};
    // vector<int>v={10,20,30,40};
    // v=x; // O(1) -> size same hole ..different hole jar beshi seta hobe O(N)
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }


    // vector<int>v={1,2,3,4,5};
    // v.insert(v.begin()+2,1000);
    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }


    vector<int>v={1,2,3,4,5};
    vector<int>a={10,20,30,40,50};
    v.insert(v.begin()+2,a.begin(),a.end());
    for(int i:v)
    {
        cout<<i<<" ";
    }
}