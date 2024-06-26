#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,3,2,2,2,4,4,1,2};
    auto it =find(v.begin(),v.end(),29);
    if(it==v.end()) cout<<"Not Found\n";
    else cout<<"Found\n";
}