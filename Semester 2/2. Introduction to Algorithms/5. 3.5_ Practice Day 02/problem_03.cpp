#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
vector<int> vt;
int x;
int dfs(int src)
{
    x++;
    vis[src] = true;
    for (int child : v[src])
    {
        if (vis[child] == false)
            dfs(child);
    }
    return x;
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false)
        {
            int xx=dfs(i);
            vt.push_back(xx);
            x = 0;
        }
    }
    sort(vt.begin(), vt.end());
    for(int i:vt)
    {
        cout << i << " ";
    }
    return 0;
}