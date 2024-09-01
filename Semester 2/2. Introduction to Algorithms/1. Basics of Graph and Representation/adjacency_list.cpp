#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a); // jodi directed graph hoy tahole eta kora jabe na
    }
    // 0 sathe ke ke connect ache
    for (int i = 0; i < mat[0].size();i++)
    {
        cout << mat[0][i] << " ";
    }
    cout << endl;
    for (int x:mat[0])
    {
        cout << x << " ";
    }
}