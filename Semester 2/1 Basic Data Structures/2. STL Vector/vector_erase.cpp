#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///***********single value delete******** */
    // vector<int>v={1,2,3,4,5};
    // v.erase(v.begin()+3);
    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }


    /***********multiple value delete******** */
    vector<int>v={1,2,3,4,5,7,8,9};
    v.erase(v.begin()+3,v.begin()+7);
    for(int i:v)
    {
        cout<<i<<" ";
    }
}