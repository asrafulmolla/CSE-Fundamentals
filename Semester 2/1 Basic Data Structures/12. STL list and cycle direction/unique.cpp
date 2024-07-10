#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {1, 2, 45, 70, 3, 4, 45, 4, 70, 8, 4};
    mylist.sort();
    mylist.unique(); // duplicate sob value dlt kore dibe// accending or deccending order thakte hobe//
    for (int val : mylist)
    {
        cout << val << " ";
    }
}