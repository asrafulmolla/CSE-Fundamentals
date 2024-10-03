#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
vector<int> v[N];
bool vis[N];
int k;
void bfs(int src, int des)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;
    bool paisi = false;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int par = p.first;
        int level = p.second;
        // cout << par << endl;
        if (par == des)
        {
            if (level % 2 == 0)
            {
                if (level / 2 <= k)
                {
                    cout << "YES\n";
                }
                else
                    cout << "NO\n";
            }
            else
            {
                if ((level / 2) + 1 <= k)
                {
                    cout << "YES\n";
                }
                else
                    cout << "NO\n";
            }
            // cout << level << endl;
            paisi = true;
        }
        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push({child, level + 1});
                vis[child] = true;
            }
        }
    }
    if (paisi == false)
    {
        cout << "NO\n" << endl;
    }
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
    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    int find;
    cin >> find;
    cin >> k;
    bfs(src, find);
    return 0;
}