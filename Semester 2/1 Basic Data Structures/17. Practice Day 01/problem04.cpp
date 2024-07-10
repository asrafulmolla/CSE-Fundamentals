#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    queue<int> qcpy;
    while (!st.empty())
    {
        qcpy.push(st.top());
        st.pop();
    }
    while (!qcpy.empty())
    {
        cout << qcpy.front() << " ";
        qcpy.pop();
    }
}