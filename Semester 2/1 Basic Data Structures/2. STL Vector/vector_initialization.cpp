#include<bits/stdc++.h>
using namespace std;
int main()
{
    // type 01
    // vector<int>v; 

    // type 02
    // vector<int>v(5); 

    // type 03
    // vector<int>v(5,1); 

    //type 04
    // vector<int>v2(5,100);
    // vector<int>v(v2); //v2 copy kore v er modhe rakhbe

    //type 05
    // int a[5]={1,2,3,4,5};
    // vector<int>v(a,a+5);

    //type 06
    vector<int>v={1,2,3,4,5,6,7};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
}