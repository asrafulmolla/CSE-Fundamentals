#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int beg = 0, end = n - 1;
    while (beg <= end)
    {
        int mid = (beg + end) / 2;
        if (a[mid] < x)
        {
            beg = mid + 1;
        }
        else if (a[mid] == x)
        {
            cout << "YES\n";
            break;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (beg > end)
    {
        cout << "NO\n";
    }
}