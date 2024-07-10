#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist;
    cout << mylist.size() << endl; // size =0

    list<int> mylist1(10);
    cout << mylist1.size() << endl; // size =10

    list<int> mylist2(10, 5);
    cout << mylist2.front() << endl; // fist elemet print

    list<int> mylist3(10, 0);
    cout << mylist3.back() << endl; // last elemet print

    // list print //
    for (auto it = mylist3.begin(); it != mylist3.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // list copy //
    list<int> a(10, 5);
    list<int> b(a); // copy

    // array copy to list//
    int array[5] = {1, 2, 3, 4, 5};
    list<int> list1(array, array + 5);
    cout << endl;

    // vector copy to list//
    vector<int> x = {10, 20, 30, 40, 50};
    list<int> y(x.begin(), x.end());

    for (auto it = y.begin(); it != y.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (int val : y)
    {
        cout << val << " ";
    }
    cout << endl;
}