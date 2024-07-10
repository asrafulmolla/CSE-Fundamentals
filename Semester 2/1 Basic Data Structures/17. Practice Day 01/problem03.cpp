#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    stack<int> stcpy;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        stcpy.push(st.top());
        st.pop();
    }
    while (!stcpy.empty())
    {
        cout << stcpy.top() << " ";
        stcpy.pop();
    }
}