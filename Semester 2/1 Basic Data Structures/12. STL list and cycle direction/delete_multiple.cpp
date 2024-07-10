#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {1, 2, 3, 4, 45, 666, 70, 8};
    mylist.erase(next(mylist.begin(), 4));
    for (int val : mylist)
    {
        cout << val << endl;
    }
}