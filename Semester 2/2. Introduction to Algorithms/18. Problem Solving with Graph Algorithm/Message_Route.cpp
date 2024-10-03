#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
vector<ll> v[N];
bool vis[N];
ll level[N];
ll parent[N];
void bfs(ll src)
{
    queue<ll> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        ll par = q.front();
        q.pop();
        for (ll child : v[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
}
int main()
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    ll src = 1, des = n;
    cin >> src >> des;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    bfs(src);
    ll x = des;
    vector<ll> path;
    while (x != -1)
    {
        path.push_back(x);
        x = parent[x];
    }
    reverse(path.begin(), path.end());
    if (path.size() == 1 && path[0] == n)
    {
        cout << "IMPOSSIBLE";
        return 0;
    }
    cout << path.size() << endl;
    for (ll val : path)
    {
        cout << val << " ";
    }
    return 0;
}