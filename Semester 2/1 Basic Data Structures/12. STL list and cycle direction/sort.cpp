#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {1, 2, 3, 4, 45, 4, 70, 8, 4};
    // mylist.sort(); // accending order sort
    mylist.sort(greater<int>()); // decending order sort
    for (int val : mylist)
    {
        cout << val << " ";
    }
}