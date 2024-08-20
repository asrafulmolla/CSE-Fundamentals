#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int f_index = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                f_index = i;
                break;
            }
        }
        // cout << f_index << " ";
        int b_index = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                b_index = i;
                break;
            }
        }
        // cout << b_index << endl;
        bool flg = false;
        for (int i = f_index; i <= b_index; i++)
        {
            if (s[i] == '0')
            {
                flg = true;
                break;
            }
            // cout << s[i];
        }
        // cout << endl;
        if (!flg)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}