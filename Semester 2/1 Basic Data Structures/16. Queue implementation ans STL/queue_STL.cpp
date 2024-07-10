#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    //     q.push(10);
    //     q.push(20);
    //     cout << q.front() << endl;
    //     q.pop();
    //     cout << q.front() << endl;
    //     cout << q.size() << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    // if(!q.empty())
    // {
    //     q.pop();
    //     cout << q.front() << endl;
    // }
}