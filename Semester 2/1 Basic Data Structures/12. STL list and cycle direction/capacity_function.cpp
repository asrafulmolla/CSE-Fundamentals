#include <bits/stdc++.h>
using namespace std;
int main()
{
    // find max_size
    list<int> mylist = {1, 2, 3, 4, 5};
    // cout << mylist.max_size() << endl;

    // clear list
    // mylist.clear();
    // cout << mylist.size() << endl; // size=0
    mylist.resize(2);
    mylist.resize(5, 100);
    for (int val : mylist)
    {
        cout << val << endl;
    }
}