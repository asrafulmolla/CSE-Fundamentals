#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {1, 2, 3, 4, 5, 6};
    list<int> newlist;
    newlist = mylist;
    // newlist.assign(mylist.begin(), mylist.end());
    for (int val : newlist)
    {
        cout << val << " ";
    }
    cout << endl;
}