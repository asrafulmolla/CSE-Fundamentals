#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
int x;
void dfs(int src)
{
    x++;
    vis[src] = true;
    for (int i = 0; i < v[src].size();i++)
    {
        int child = v[src][i];
        if(vis[child]==false)
        {
            dfs(child);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    int src;
    cin >> src;
    dfs(src);
    cout << x << endl;
}