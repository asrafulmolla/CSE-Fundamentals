#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;  // -> O(1)
    cin>>n; // -> O(1)
    for(int i=1;i<=n;i++)// -> O(N)
    {
        for(int j=1;j<=n;j++) // -> O(N)
        {
            cout<<"hi\n"; // -> O(1)
        }
    }
//  ------------------------------------
//          maximun=   O(N*N) =O(N^2) nested loop e gun hoy
}