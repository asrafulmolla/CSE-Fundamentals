#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;  // -> O(1)
    cin>>n; // -> O(1)
    for(int i=1;i<=n;i++)// -> O(N)
    {
        int x=i;
        while(x>0)  // -> O(log(N))
        {
            int digit=x%10;
            cout<<digit<<" ";
            x/=10;
        }
        cout<<endl;
    }
//  --------------------------------------------
//          maximun=  O(N*log(N)) => O(Nlog(N))
}