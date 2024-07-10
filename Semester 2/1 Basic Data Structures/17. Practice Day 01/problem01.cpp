#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> l;
    list<int> l2;
    void push(int val)
    {
        l.push_back(val);
    }
    void push2(int val)
    {
        l2.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    void pop2()
    {
        l2.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int top2()
    {
        return l2.back();
    }
    int size()
    {
        return l.size();
    }
    int size2()
    {
        return l2.size();
    }
    bool empty()
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
    bool empty2()
    {
        if (l2.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st.push2(x);
    }
    if (st.size() != st.size2())
    {
        cout << "NO";
        return 0;
    }
    while (!st.empty() && !st.empty2())
    {
        if (st.top() != st.top2())
        {
            cout << "NO";
            return 0;
        }
        st.pop();
        st.pop2();
    }
    cout << "YES";
}