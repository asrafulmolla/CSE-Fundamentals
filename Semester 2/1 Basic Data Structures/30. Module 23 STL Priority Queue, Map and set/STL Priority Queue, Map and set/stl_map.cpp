#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    
    //insert way 1//

    mp.insert({"Sakib al hasan", 75});
    mp.insert({"Tamim Qkbal", 19});
    mp.insert({"Liton Das", 16});
    mp.insert({"Akib", 90});

    //insert way 2//

    mp["asraful"] = 10;
    mp["rimon"] = 99;

    // for (auto it = mp.begin(); it != mp.end();it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // specific string value print

    // cout << mp["Tamim Qkbal"] << endl;

    //string ache ki na

    if(mp.count("rimon"))
    {
        cout << "Found" << endl;
    }
    else
        cout << "Not Found" << endl;
}