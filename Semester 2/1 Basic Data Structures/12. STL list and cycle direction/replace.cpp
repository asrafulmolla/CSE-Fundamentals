#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {1, 2, 3, 4, 45, 4, 70, 8, 4};
    replace(mylist.begin(), mylist.end(), 4, 666);
    for (int val : mylist)
    {
        cout << val << endl;
    }
}