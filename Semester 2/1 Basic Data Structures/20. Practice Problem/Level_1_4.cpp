#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    int q;
    cin >> q;
    int m = n - q;
    for (int i = 1; i <= m;i++)
    {
        st.pop();
    }
    cout << st.top();
}