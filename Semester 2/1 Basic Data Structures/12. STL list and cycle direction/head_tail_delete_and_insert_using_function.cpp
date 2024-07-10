#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {10, 20, 30, 40};
    // mylist.push_back(100); // tail e insert
    // mylist.push_front(500); // head e insert
    // mylist.pop_back(); // tail delete
    mylist.pop_front(); // head delete
    for (int val : mylist)
    {
        cout << val << " ";
    }
    cout << endl;
}