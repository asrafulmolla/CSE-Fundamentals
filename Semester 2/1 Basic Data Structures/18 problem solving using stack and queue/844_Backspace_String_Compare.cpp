// https://leetcode.com/problems/backspace-string-compare/description/

class Solution
{
public:
    stack<char> st1;
    stack<char> st2;
    bool backspaceCompare(string s, string t)
    {
        for (char c : s)
        {
            if (c == '#')
            {
                if (st1.empty())
                {
                    continue;
                }
                else
                {
                    st1.pop();
                }
            }
            else
            {
                st1.push(c);
            }
        }
        for (char c : t)
        {
            if (c == '#')
            {
                if (st2.empty())
                {
                    continue;
                }
                else
                {
                    st2.pop();
                }
            }
            else
            {
                st2.push(c);
            }
        }

        return st1 == st2;
    }
};