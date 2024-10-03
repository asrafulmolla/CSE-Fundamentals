#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool flg = false;
void knapsack(ll i, ll n)
{
    if (i > n)
        return;
    if(i==n)
    {
        flg = true;
    }
    knapsack(i * 10, n);
    knapsack(i * 20, n);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        knapsack(1, n);
        if(flg)
            cout << "YES\n";
        else
            cout << "NO\n";
        flg = false;
    }
    return 0;
}