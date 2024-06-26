#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long int> b(n);
    b[0]=a[0];
    for(int i=1;i<n;i++)
    {
        b[i]=a[i]+b[i-1];
    }
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        if (x == 0)
        {
            cout << b[y]<< endl;
        }
        else
        {
            cout << b[y] - b[x - 1] << endl;
        }
    }
}