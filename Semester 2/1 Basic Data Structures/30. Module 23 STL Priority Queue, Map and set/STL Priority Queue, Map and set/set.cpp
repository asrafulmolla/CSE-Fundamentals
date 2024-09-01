#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    // for (auto it = s.begin(); it != s.end();it++)
    // {
    //     cout << *it << endl;
    // }

    // kono value ache ki nai
    if(s.count(10))
    {
        cout << "YES";

    }
    else
        cout << "NO";
}