#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    vector<int> v;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int val1;
            cin >> val1;
            if (v.empty())
                v.push_back(val1);
            else
                v.insert(v.begin() + 1, val1);
        }
        else if (x == 2)
        {
            int val2;
            cin >> val2;
            if (v.empty())
                v.push_back(val2);
            else
                v.insert(v.end() - 1, val2);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}