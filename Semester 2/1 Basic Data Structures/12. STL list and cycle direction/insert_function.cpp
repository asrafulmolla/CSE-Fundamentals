#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {10, 20, 30, 40};
    // mylist.insert(next(mylist.begin(), 2), 100); // 2 position 100 insert// ei function cyclic way data insert kore// single value insert
    // mylist.insert(next(mylist.begin(), 3), {100, 200, 400}); // multiple value insert

    list<int> newlist = {100, 200, 300, 400, 500};
    // mylist.insert(next(mylist.begin(), 3), newlist.begin(), newlist.end()); // list insert
    vector<int> v = {15, 25, 35};
    // mylist.insert(next(mylist.begin(), 3), v.begin(), v.end()); // list insert to vector

    int arr[5] = {12, 1, 31, 4, 55};
    mylist.insert(next(mylist.begin(), 3), arr, arr + 5); // list insert to Array

    for (int val : mylist)
    {
        cout << val << " ";
    }
    cout << endl;
}