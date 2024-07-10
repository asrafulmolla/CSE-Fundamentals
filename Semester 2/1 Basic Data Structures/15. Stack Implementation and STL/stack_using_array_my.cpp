#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    int n;
    cout << "\nEnter Stack Size: ";
    cin >> n;
    while (1)
    {
        cout << "\nOption 1: Push Value: ";
        cout << "\nOption 2: Pop Value: ";
        cout << "\nOption 3: Show Current Stack: ";
        cout << "\nOption 4: Exit";
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
            if (st.size() == n)
            {
                cout << "Stack Overflow" << endl;
                break;
            }
            int val;
            cout << "Enter Pushed value: ";
            cin >> val;
            st.push(val);
            break;
        case 2:
            if (st.size() == 0)
            {
                cout << "Stack Underflow" << endl;
                break;
            }
            cout << "Poped value: " << st.top() << endl;
            break;
        case 3:
            if (st.size() == 0)
            {
                cout << "Stack Underflow" << endl;
                break;
            }
            cout << "Your Stack value: " << endl;
            int sz = st.size();
            while (sz != 0)
            {
                cout << st.top() << endl;
                sz--;
            }
            break;
        case 4:
            exit(0);
        }
    }
}