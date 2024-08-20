#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v1(n);
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    int sum = 0;
    // reverse(v.begin(), v.end());
    for (int i = n-1; i >=0;i--)
    {
        v1[i] = sum;
        sum+=v[i];
    }
    
    for (int i = 0; i < n-1;i++)
    {
        cout << v1[i] << " ";
    }
    cout << 0;
}