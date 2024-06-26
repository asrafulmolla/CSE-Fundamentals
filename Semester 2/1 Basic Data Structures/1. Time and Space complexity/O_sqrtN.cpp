#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;  // -> O(1)
    cin>>n; // -> O(1)
    for(int i=0;i<sqrt(n);i++)// -> O(sqrt N)
    {
        if(n%1==0) // -> O(1)
        {
            cout<<i<<" "; // -> O(1)
            if(n/i!=i) cout<<n/i<<endl; // -> O(1)
        }
    }
//  ------------------------------------
//          maximun=       O(sqrt N)
}