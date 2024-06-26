#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5,7,6};

    ///*******Method 01 ********* */
    // vector<int>::iterator it;
    // for(it=v.begin();it<v.end();it++)
    // {
    //     cout<<*it<<" ";
    // }

    ///*******Method 02 ********* */
    for(auto it=v.begin();it<v.end();it++)
    {
        cout<<*it<<" ";
    }
}