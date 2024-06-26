#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;  // -> O(1)
    cin>>n; // -> O(1)
//     while(n>0) // -> O(log N)
//     {
//         int digit=n%10; // -> O(1)
//         cout<<digit<<endl;// -> O(1)
//         n/=10;// -> O(1)
//     }
// //  ------------------------------------
// //          maximun= O(log N)

    for(int i=1;i<=n;i*=2)    // -> O(log N)
    {
        cout<<i<<endl;  // -> O(1)
    }
//  ------------------------------------
//          maximun= O(log N)
}