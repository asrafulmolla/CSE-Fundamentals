#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sentance;
    getline(cin, sentance);
    string word;
    stringstream ss(sentance);
    map<string, int> mp;
    while(ss>>word)
    {
        mp[word]++;
    }
    //all word count output
    for (auto it = mp.begin(); it != mp.end();it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    //specific word count value output
    cout << mp["i"] << endl;
}