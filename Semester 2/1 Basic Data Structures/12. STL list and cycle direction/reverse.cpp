#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {1, 2, 45, 70, 3, 4, 45, 4, 70, 8, 4};
    mylist.reverse(); // list reverse kore dibe
    for (int val : mylist)
    {
        cout << val << " ";
    }
}