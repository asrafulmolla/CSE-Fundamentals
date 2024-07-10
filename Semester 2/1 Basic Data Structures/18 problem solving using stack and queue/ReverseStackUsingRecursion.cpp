// https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875
void reverseStack(stack<int> &s)
{
    if (s.empty())
        return;
    cout << s.top() << " ";
    s.pop();
    reverseStack(s);
}
