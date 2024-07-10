#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {1, 2, 45, 70, 3, 4, 45, 4, 70, 8, 4};
    cout << mylist.front() << endl;           // head access
    cout << mylist.back() << endl;            // tail access
    cout << *next(mylist.begin(), 3) << endl; // 3 number index value access
}